// 문제가 개편되었습니다. 이로 인해 함수 구성이나 테스트케이스가 변경되어, 과거의 코드는 동작하지 않을 수 있습니다.
// 새로운 함수 구성을 적용하려면 [코드 초기화] 버튼을 누르세요. 단, [코드 초기화] 버튼을 누르면 작성 중인 코드는 사라집니다.
#include <string>
#include <vector>
#include<queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    queue<int>q;
    int rest, day;
    int cnt = 1;
    
    for(int i = 0; i<progresses.size(); i++){
        rest = 100 - progresses[i];
        
        if(rest%speeds[i] == 0){
            day = rest/speeds[i];
            q.push(day);
        }else{
            day = rest/speeds[i] + 1;
            q.push(day);
        }
    }
    
    int num = q.front();
    
    q.pop();
    
    while(!q.empty()){
        if(q.front() <= num){
            cnt++;
            q.pop();
        }else{
            num = q.front();
            answer.push_back(cnt);
            cnt = 0;
        }
    }
    answer.push_back(cnt);
    return answer;
}