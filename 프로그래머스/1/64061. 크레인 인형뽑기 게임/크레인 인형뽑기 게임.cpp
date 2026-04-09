#include <string>
#include <vector>
#include<stack>

using namespace std;

stack<int>st;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    for(int i = 0; i<moves.size(); i++){
        for(int j = 0; j<board.size(); j++){
            if(board[j][moves[i] - 1] != 0){
                int num = board[j][moves[i] - 1];
                board[j][moves[i] - 1] = 0;
                
                if(st.empty()){
                    st.push(num);
                }else{
                    if(st.top() == num){
                        st.pop();
                        answer += 2;
                    }else{
                        st.push(num);
                    }
                }
                break;
            }
        }
    }    
    return answer;
}