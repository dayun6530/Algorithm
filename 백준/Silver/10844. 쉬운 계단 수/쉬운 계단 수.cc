#include<iostream>

using namespace std;

int dp[100][12] = { 0 };

int main() {

	int result = 0;

	int N;
	cin >> N;

	for (int i = 2; i < 11; i++) {
		dp[0][i] = 1;
	}

	for (int i = 1; i < N; i++) {
		dp[i][0] = 0;
		dp[i][11] = 0;
		for (int j = 1; j < 11; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	}

	for (int i = 1; i < 11; i++) {
		result = (result + dp[N - 1][i]) % 1000000000;
	}

	cout << result;
	return 0;
}