#include<iostream>
#include<vector>

#define MAX 9
using namespace std;

int N, M;
vector<int>v;
int arr[MAX] = { false, };

void solution(int Cnt) {
	if (Cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		v.push_back(i);
		solution(Cnt + 1);
		v.pop_back();
	}
}

int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	cin >> N >> M;

	solution(0);
	
	return 0;
}