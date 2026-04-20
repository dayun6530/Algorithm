#include <string>
#include <vector>
#define MAX 201

using namespace std;

bool vi[MAX] = {false,};

void dfs(int node, int n, vector<vector<int>> computers){
    
    vi[node] = true;
    
    for(int i = 0; i<n; i++)
        if(computers[node][i] == 1 && !vi[i]){
            dfs(i, n, computers);
        }
    
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i = 0; i<n; i++){
        if(!vi[i]){
            answer++;
            dfs(i, n, computers);
        }
    }
    
    return answer;
}