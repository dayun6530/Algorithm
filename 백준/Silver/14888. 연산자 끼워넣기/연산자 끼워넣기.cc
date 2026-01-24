#include<iostream>
#include<algorithm>
using namespace std;
const int MAX = 1000000000 +1 ;

int N;
int numbers[12], Operator[4];
int maxResult = -MAX, minResult = MAX;

void DFS(int add, int sub, int mul, int div, int cnt, int sum){
    
    if(cnt == N){
        maxResult = max(maxResult, sum);
        minResult = min(minResult, sum);
    }
    if(add > 0){
        DFS(add - 1, sub, mul, div, cnt + 1, sum + numbers[cnt]);
    }
    if(sub > 0){
        DFS(add, sub - 1, mul, div, cnt + 1, sum - numbers[cnt]);
    }
    if(mul > 0){
        DFS(add, sub, mul - 1, div, cnt + 1, sum * numbers[cnt]);
    }
    if(div > 0){
        DFS(add, sub, mul, div - 1, cnt + 1, sum / numbers[cnt]);
    }
}

int main(){
    cin >> N;
    
    for(int i = 0; i<N; i++){
        cin >> numbers[i];
    }
    for(int i = 0; i<4; i++){
        cin >> Operator[i];
    }
    
    DFS(Operator[0], Operator[1], Operator[2], Operator[3], 1, numbers[0]);
    
    cout << maxResult << endl;
    cout << minResult << endl;
    return 0;
}