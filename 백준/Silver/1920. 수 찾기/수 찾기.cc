#include<iostream>
#include<algorithm>
#include<vector>

#define MAX 100001

using namespace std;

vector<int>arr;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;

	cin >> n;

	arr.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());
	cin >> m;
	int num;
	for (int i = 0; i < m; i++) {
		cin >> num;

		if (binary_search(arr.begin(), arr.end(), num)) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}

}