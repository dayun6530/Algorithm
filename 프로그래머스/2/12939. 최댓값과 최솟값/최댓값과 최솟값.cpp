#include <string>
#include <vector>
#include<algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int>v;   //만든 정수 모아서 비교하기
    string tmp; //정수 만들어주기
    
    for(int i = 0; i<s.size(); i++){
        if(s[i] == ' '){
            v.push_back(stoi(tmp));
            tmp.clear();
        }else{
            tmp += s[i];
        }
    }
    
    v.push_back(stoi(tmp));
    
    sort(v.begin(), v.end());
    
    answer += to_string(v.front());
    answer += " ";
    answer += to_string(v.back());
    return answer;
}