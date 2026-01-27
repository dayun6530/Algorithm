#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[1000001];
	int dp[1000001];
	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	dp[0] = arr[0];
	ans = dp[0];

	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		ans = max(ans, dp[i]);
	}

	cout << ans;

	return 0;
}