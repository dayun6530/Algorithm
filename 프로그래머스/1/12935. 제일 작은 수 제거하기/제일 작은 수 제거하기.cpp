#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int index;
    int minNum = arr[0];
    for(int i = 1; i<arr.size(); i++){
        minNum = min(minNum, arr[i]);
    }
    
    for(int i = 0; i<arr.size(); i++){
        if(minNum == arr[i]){
            index = i;
        }
    }
    
    arr.erase(arr.begin() + index);
    
    
    if(arr.empty()){
        answer.push_back(-1);
    }else{
        for(int i = 0; i<arr.size(); i++){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}