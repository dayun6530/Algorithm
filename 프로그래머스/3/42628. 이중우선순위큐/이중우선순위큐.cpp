#include <string>
#include <vector>
#include<queue>
#include<sstream>
#include<algorithm>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    
    deque<int>dq;
    stringstream ss;
    string order, num;
    int temp;
    for(int i = 0; i<operations.size(); i++){
        ss.str(operations[i]);
        ss >> order;
        ss >> num;
        
       temp = stoi(num);
        if(order == "I"){
            dq.push_back(temp);
            sort(dq.begin(), dq.end());
        }
        else {
            if(!dq.empty()){
                if(temp == -1){
                    dq.pop_front();
                }else{
                    dq.pop_back();
                }
            }
        }
         ss.clear();
    }
    
    if(dq.empty()){
        answer.push_back(0);
        answer.push_back(0);
        
    }else{
        
        answer.push_back(dq.back());
        answer.push_back(dq.front());
    }
    
    return answer;
}