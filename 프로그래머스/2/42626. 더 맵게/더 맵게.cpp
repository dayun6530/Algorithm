#include <string>
#include <vector>
#include<queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int>pq;
    
    for(int i = 0; i<scoville.size(); i++){
        pq.push(-scoville[i]);
    }
    
    while(!pq.empty()){
        int num1 = -pq.top();
        pq.pop();
        
        if(num1 >= K){
            break;
        }
        if(!pq.empty()){
            int num2 = - pq.top();
            pq.pop();
            int result = num1 + (num2 * 2);
            pq.push(-result);
            answer++;
        }else{
            answer = -1;
            break;
        }
    }
    
    return answer;
}