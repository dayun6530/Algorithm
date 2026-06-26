#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool check = true;
    
    for(int i = 0; i<s.size(); i++){
        if(s[i] == ' '){
            check = true;
        }else{
            if(check){
                check = false;
                if('a' <= s[i] && s[i] <= 'z'){
                    s[i] = toupper(s[i]);
                }
            }else{
                if('A' <= s[i] && s[i] <= 'Z'){
                    s[i] = tolower(s[i]);
                }
            }
        }
    
     }

    answer = s;
    
    return answer;
}