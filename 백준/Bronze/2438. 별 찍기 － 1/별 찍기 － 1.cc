#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int arr[101][101];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cout << '*' ;
		}
		cout << endl;
	}
}