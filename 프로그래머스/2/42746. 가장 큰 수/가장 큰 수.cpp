#include <string>
#include <vector>
#include<algorithm>
#include<cstring>
using namespace std;

bool comp(string a, string b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string>v;
    
    for(int i = 0; i<numbers.size(); i++){
        string num = to_string(numbers[i]);
        v.push_back(num);
    }
    
    sort(v.begin(), v.end(), comp); 
    
    if(v[0] == "0"){
        answer = "0";
    }else{
        for(int i = 0; i<v.size(); i++){
            answer += v[i];
        }
    }
    
    return answer;
}