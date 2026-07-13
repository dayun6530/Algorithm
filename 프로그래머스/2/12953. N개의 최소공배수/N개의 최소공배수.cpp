#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
   
    while(b > 0){
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int solution(vector<int> arr) {
    int answer = 0;
    
    answer = lcm(arr[0], arr[1]);
    
    for(int i = 0; i<arr.size()-1; i++){
       answer = lcm(answer, arr[i+1]);
    }
    
    return answer;
}