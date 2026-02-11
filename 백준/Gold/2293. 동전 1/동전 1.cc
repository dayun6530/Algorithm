#include<iostream>
	
using namespace std;

int main() {

	int n, reach;
	int dp[100001] = { 0 };
	int coins[101];

	cin >> n >> reach;

	for (int i = 1; i <= n; i++)
		cin >> coins[i];

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = coins[i]; j <= reach; j++) {
			dp[j] += dp[j - coins[i]];
		}
	}

	cout << dp[reach] << endl;

	return 0;
}