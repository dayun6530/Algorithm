#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int alphabet[26] = {0,};
    int index = 0;
    int store = 0;
    bool run = false;
    
    for(int i = 0; i<skill.size(); i++){
        alphabet[skill[i] - 'A'] = i+1;
    }
    
    for(int i = 0; i<skill_trees.size(); i++){
        run = true, store = 0;
        for(int j = 0; j<skill_trees[i].size(); j++){
            int tmp = alphabet[skill_trees[i][j] - 'A'];
            if(tmp != 0){
                if(tmp - store == 1){
                    store = tmp;
                }else{
                    run = false;
                    break;
                }
            }
        }
        if(run){
            answer++;
        }
    }
    return answer;
}