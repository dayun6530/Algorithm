#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N, M;

	cin >> N >> M;

	vector<string>v;
	vector<string>ans;
	v.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	string s;
	for (int i = 0; i < M; i++) {
		cin >> s;

		if(binary_search(v.begin(), v.end(), s)) {
			ans.push_back(s);
		}
	}

	sort(ans.begin(), ans.end());

	int size = ans.size();

	cout << size <<"\n";

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}
}