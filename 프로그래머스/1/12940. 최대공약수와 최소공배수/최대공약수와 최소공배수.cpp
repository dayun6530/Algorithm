#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    
    for(int i = a<b?a:b; i>0; i--){
        if(a%i==0 && b%i==0){
            return i;
            break;
        }
    }
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));
    
    return answer;
}