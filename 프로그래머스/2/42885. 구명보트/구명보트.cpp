#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    int left = 0;
    int right = people.size()-1;
    int cnt = 0;
    sort(people.begin(), people.end());
    
    while(right>=left){
         if(people[left] + people[right] > limit){
                right--;
                cnt++;
        }else{
             right--;
             left++;
             cnt++;
         }
        
    }
    answer = cnt;
    
    return answer;
}