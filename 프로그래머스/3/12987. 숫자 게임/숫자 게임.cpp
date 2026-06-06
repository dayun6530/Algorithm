#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    
    int indexA = 0;
    int indexB = 0;
    
    while(!(indexA == A.size() || indexB == B.size())){
        if(A[indexA] < B[indexB]){
            indexA++;
            indexB++;
            answer++;
        }else{
            indexA++;
        }
    }
    return answer;
}