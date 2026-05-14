#include <string>
#include <vector>
#include<algorithm>
#include<cstring>

#define MAX 8

using namespace std;

string s;
bool vi[MAX] = {false,};
vector<char>pick;
vector<int>all;

void dfs(int Cnt){
    
    if(Cnt == s.size()){
        
        string temp;
        for(int i = 0; i<pick.size(); i++){
            temp += pick[i];
        }
        
        int num = stoi(temp);
        all.push_back(num);
        
        return;
        
    }else if(Cnt != 0 && Cnt < s.size()){
        
        string temp;
        
        for(int i = 0; i<pick.size(); i++){
            temp += pick[i];
        }
        
        int num = stoi(temp);
        all.push_back(num);
    }
    
    for(int i = 0; i<s.size(); i++){
        if(!vi[i]){
            vi[i] = true;
            pick.push_back(s[i]);
            dfs(Cnt + 1);
            vi[i] = false;
            pick.pop_back();
        }        
    }
}

int solution(string numbers) {
    int answer = 0;
    
    s = numbers;
    
    dfs(0);
    
    sort(numbers.begin(), numbers.end(), greater<int>());
    
    int max = stoi(numbers);
    
    vector<bool>isPrime(max+1, false);
    vector<bool>check(max+1, false);
    
    isPrime[0] = true;
    isPrime[1] = true;
    
    for(int i = 2; i<=max; i++){
        if(!isPrime[i]){
            for(int j = 2 * i; j<=max; j+=i){
                    isPrime[j] = true;
            }
            
        }
    }
    
    for(int i = 0; i<all.size(); i++){
        if(!isPrime[all[i]] && !check[all[i]]){
            check[all[i]] = true;
            answer++;
        }
    }
    
    return answer;
}