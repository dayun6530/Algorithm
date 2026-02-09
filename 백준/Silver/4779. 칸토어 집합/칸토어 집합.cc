#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

void cantor(int num) {
	if (num == 0) {
		cout << '-';
		return;
	}//N이 0일 경우

	cantor(num - 1);
	for (int i = 0; i < pow(3, num - 1); i++) {
		cout << ' ';
	}
	cantor(num - 1);
	//N번째 칸토어 = N-1번째 칸토어 집합('-') 2개, N-1번째 칸토어 집합(' ') 1개
}

int main() {
	int n;
	while (cin >> n) {
		cantor(n);
		cout << '\n';
	}
	return 0;
}