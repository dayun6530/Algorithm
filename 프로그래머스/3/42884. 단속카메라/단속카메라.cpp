#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}
int min(int a, int b){
    return a <b ? a : b;
}

int solution(vector<vector<int>> routes) {
    int camera = 1;
    int left, right;
    int size = routes.size();
    
    sort(routes.begin(), routes.end());
    
    left = routes[0][0];
    right = routes[0][1];
    
    for(int i = 1; i<routes.size(); i++){
        int cur_left = routes[i][0];
        int cur_right = routes[i][1];
        
        if(left <= cur_left && cur_right <= right){
            left = cur_left;
            right = cur_right;
        }
        else if(right < cur_left || left > cur_right){
            camera++;
            left = cur_left;
            right = cur_right;
        }
        else{
            left = max(left, cur_left);
            right = min(right, cur_right);
        }
    }
    return camera;
}