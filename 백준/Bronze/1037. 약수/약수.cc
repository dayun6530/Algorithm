#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int num;
	cin >> num;
	int* A = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> A[i];
	}

	sort(A, A + num);

	cout << A[0] * A[num - 1];

	return 0;
}