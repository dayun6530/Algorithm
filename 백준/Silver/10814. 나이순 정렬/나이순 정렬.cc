#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
	cin >> N;

	vector<string>name(N);
	vector<pair<int, int>>v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> name[i];
		v[i].second = i;
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << name[v[i].second] << "\n";
	}
	return 0;
}