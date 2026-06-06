#include <string>
#include <vector>
#include<queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    queue<pair<int,int>>q;
    priority_queue<int>pq;
    
    for(int i = 0; i<priorities.size(); i++){
        q.push(make_pair(i, priorities[i]));
        pq.push(priorities[i]);
    }
    
    while(!q.empty()){
        int cur_index = q.front().first;
        int cur_priority = q.front().second;
        
        q.pop();
        
        if(pq.top() == cur_priority){
            pq.pop();
            answer++;
            if(cur_index == location){
                break;
            }
        }else{
            q.push(make_pair(cur_index, cur_priority));
        }
    }
    
    return answer;
}