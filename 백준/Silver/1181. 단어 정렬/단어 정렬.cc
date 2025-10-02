#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}

int main() {

	int N;
	cin >> N;

	vector<string>v;
	
	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), comp);

	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}