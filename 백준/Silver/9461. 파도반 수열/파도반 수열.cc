#include<iostream>

using namespace std;

int N;
const int MAX = 101;
long long dp[MAX];

int main() {

	int test_case;


	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;

	for (int i = 6; i <= 100; i++) {
		dp[i] = dp[i - 2] + dp[i - 3];
	}


	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		cin >> N;
		cout << dp[N] << endl;
	}

	return 0;
}