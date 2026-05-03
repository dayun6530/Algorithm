#include <string>
#include <vector>
#include<sstream>
#include<map>
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string>log;
    vector<string>id;
    string order,uid, nickname;
    stringstream ss;
    map<string,string>table;
   
    for(int i=0; i<record.size(); i++){
        ss.str(record[i]);
        ss >> order;
        ss >> uid;
        ss >> nickname;
        
        if(order == "Enter"){
            log.push_back("님이 들어왔습니다.");
            id.push_back(uid);
            table[uid] = nickname; 
        }
        if(order == "Leave"){
            log.push_back("님이 나갔습니다.");
            id.push_back(uid);
        }
        if(order == "Change"){
            table[uid] = nickname;
        }
        ss.clear();
    }
    
    for(int i=0; i<log.size(); i++){
        log[i] = table[id[i]] + log[i];
    }
    answer = log;
    return answer;
}