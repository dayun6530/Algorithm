#include<iostream>

using namespace std;

const int MAX = 1000000;
long long DP[MAX];

int main() {

	int N;
	cin >> N;

	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;

	for (int i = 3; i <= N; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
		DP[i] %= 15746;
	}

	cout << DP[N]<< endl;
	
	return 0;
}