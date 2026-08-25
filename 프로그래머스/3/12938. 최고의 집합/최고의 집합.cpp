#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    
    int a;
    int c = 0;
    
    if(s<n){
        answer.push_back(-1);
    }else{
        answer.resize(n);
        while(n){
            a = s/n;
            answer[c] = a;
            s -= a;
            n--;
            c++;
        }
    }
    
    return answer;
}