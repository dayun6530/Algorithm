#include <string>
#include <vector>

using namespace std;

vector<int>v;
int answer = 0;

void pick(int Cnt, vector<int> numbers, int target) {
    if (Cnt == numbers.size()) {
        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0) {
                sum += numbers[i];
            }
            else {
                sum -= numbers[i];
            }
        }
        if (target == sum) {
            answer++;
        }
        return;
    }
    for (int i = 0; i < 2; i++) {
        v.push_back(i);
        pick(Cnt + 1, numbers, target);
        v.pop_back();
    }
}

int solution(vector<int> numbers, int target) {

    pick(0, numbers, target);

    return answer;
}