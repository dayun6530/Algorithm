#include<iostream>

using namespace std;

int arr[101];

int answer = 0;
bool check(int a) {
	int cnt = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
		
	for (int i = 0; i < N; i++) {
		if (check(arr[i])) {
			answer++;
		}
	}

	cout << answer;
}