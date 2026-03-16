#include<iostream>

using namespace std;

int solution(int n) {
	int a, b, c, d;
	a = n % 10;
	b = (n / 10) % 10;
	c = n / 100;
	d = a * 100 + b * 10 + c;
	return d;
}

int main() {

	int A, B;
	int C, D;

	cin >> A >> B;

	C = solution(A);
	D = solution(B);

	if (C > D) {
		cout << C;
	}
	else {
		cout << D;
	}
}