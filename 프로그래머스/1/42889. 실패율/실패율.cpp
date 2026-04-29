#include <string>
#include <vector>
#include<algorithm>

using namespace std;

bool comp(pair<double, int> a, pair<double, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double,int>>fail;
    int stage[501] = {0,};
    int user_num = stages.size();
    
    for(int i = 0; i<stages.size(); i++){
        stage[stages[i]-1]++;
    }
    
    for(int i = 0 ;i<N; i++){
        if(stage[i] == 0){
            fail.push_back(make_pair(0, i + 1));
        }else{
            fail.push_back(make_pair((double)stage[i]/user_num, i + 1));
            user_num -= stage[i];
        }
    }
    
    sort(fail.begin(), fail.end(), comp);
    for(int i = 0; i<fail.size(); i++){
        answer.push_back(fail[i].second);
    }
    return answer;
    
}