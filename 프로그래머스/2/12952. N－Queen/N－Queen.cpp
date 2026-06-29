#include <string>
#include <vector>

using namespace std;

int answer, board_size;
bool isValid(int y, int x, vector<vector<bool>> &vi){
    
    for(int i = 0; i<y; i++){
        if(vi[i][x] == true){
            return false;
        }
    }
    int leftY = y - 1;
    int leftX = x - 1;
    
    while(leftY >= 0 && leftX >= 0){
        if(vi[leftY][leftX] == true){
            return false;
        }
        leftX--;
        leftY--;
    }
    int rightY = y - 1;
    int rightX = x + 1;
    
    while(rightY >= 0 && rightX < board_size){
        if(vi[rightY][rightX] == true){
            return false;
        }
        rightX++;
        rightY--;
    }
    return true;
}
void dfs(int cnt, vector<vector<bool>>&vi){
    if(cnt == board_size){
        answer++;
        return;
    }
    for(int i = 0; i<board_size; i++){
        if(isValid(cnt, i, vi)){
            vi[cnt][i] = true;
            dfs(cnt+1, vi);
            vi[cnt][i] = false;
        }
    }
}

int solution(int n) {
    
    answer = 0;
    board_size = n;
    vector<vector<bool>>vi(n, vector<bool>(n,false));
    dfs(0, vi);
    
    return answer;
}