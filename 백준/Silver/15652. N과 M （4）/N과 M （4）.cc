#include<vector>
#include<iostream>

using namespace std;

int N, M;
vector<int>v;

void solution(int Cnt) {
	if (Cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (v.empty()) {
			v.push_back(i);
			solution(Cnt + 1);
			v.pop_back();
		}
		else if (!v.empty() && v.back() <= i) {
			v.push_back(i);
			solution(Cnt + 1);
			v.pop_back();
		}
	}
}

int main() {

	cin >> N >> M;

	solution(0);

	return 0;
}