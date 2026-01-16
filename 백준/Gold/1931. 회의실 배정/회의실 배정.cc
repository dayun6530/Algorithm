#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) {
	return (a.second < b.second);
}

int main() {

	int N, n1, n2, min, cnt = 0;

	cin >> N;
	vector<pair<int, int>>v;

	for (int i = 0; i < N; i++) {
		cin >> n1 >> n2;
		v.push_back(make_pair(n1, n2));
	}
	sort(v.begin(), v.end());
	sort(v.begin(), v.end(), sortbysec);

	min = v[0].second;
	cnt++;

	for (int i = 1; i < N; i++) {
		if (v[i].first >= min) {
			min = v[i].second;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}