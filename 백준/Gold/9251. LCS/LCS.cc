#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main() {

	const int MAX = 1001;
	char s1[MAX], s2[MAX];
	int dp[MAX][MAX];
	cin >> s1 >> s2;

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (int i = 1; i <= len1; i++) {
		for (int j = 1; j <= len2; j++) {
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[len1][len2];
	return 0;
}