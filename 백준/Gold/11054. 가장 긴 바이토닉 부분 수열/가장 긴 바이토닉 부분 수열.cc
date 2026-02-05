#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;

	int arr[1001];
	int dpl[1001];
	int dpr[1002];
	int dp[1001];
	int ans = 0;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		dpl[i] = 1;
		dpr[n - i + 1] = 1;
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j] && dpl[i] < dpl[j] + 1) dpl[i] = dpl[j] + 1;
			if (arr[n - i + 1] > arr[n - j + 1] && dpr[n - i + 1] < dpr[n - j + 1] + 1) dpr[n-i+1] = dpr[n-j+1] + 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		dp[i] = dpr[i] + dpl[i];
		ans = max(ans, dp[i]);
	}

	cout << ans-1;
	return 0;
}