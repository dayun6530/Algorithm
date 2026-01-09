#include<iostream>

using namespace std;

int main() {

	// N : 입력값	m : 5kg 봉지의 사용 최대 개수	
	// mod : 나누어지는 중간 값		result : 봉지 개수

	int N, m, mod, result;

	cin >> N;

	m = N / 5;
	while (m >= 0) {
		mod = 0;
		result = 0;
		if (m > 0) {
			mod = N - 5 * m;
			result = m;
		}
		else {
			mod = N;
		}
		//-----------------------
		//5로 나누었을때의 경우



		result += mod / 3;
		mod = mod % 3;
		//-----------------------
		//3으로 나누었을때의 경우
		if (mod == 0) {
			cout << result;
			break;
		}
		m--;	//0으로 나누어 떨어지지 않으므로 5kg 봉지 개수 줄이고 다시 반복
	}
	if (mod != 0) {
		cout << -1;
	}
}