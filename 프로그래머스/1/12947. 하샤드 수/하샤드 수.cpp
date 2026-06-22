#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int tmp = x;
    int total = 0;
    while(tmp!=0){
        total += tmp%10;
        
        tmp = tmp/10;
    }
    
    if(x % total != 0){
        answer = false;
    }
    
    return answer;
}