#include<iostream>
#include<algorithm>
#define MAX 51

const int INF = 987654321;

using namespace std;
int N, M;
string board[MAX];

	string WB[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
	};
	string BW[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
	};

	int WB_cnt(int y, int x) {
		int cnt = 0;
		for (int i = y; i < y + 8; i++) {
			for (int j = x; j < x + 8; j++) {
				if (board[i][j] != WB[i - y][j - x]) {
					cnt++;
				}
			}
		}
		return cnt;
}
	int BW_cnt(int y, int x) {
		int cnt = 0;
		for (int i = y; i < y + 8; i++) {
			for (int j = x; j < x + 8; j++) {
				if (board[i][j] != BW[i - y][j - x]) {
					cnt++;
				}
			}
		}
		return cnt;
	}


int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> board[i];
	}
	
	int result = INF;

	for (int i = 0; i + 7 < N; i++) {
		for (int j = 0; j + 7 < M; j++) {
			result = min(result, min(BW_cnt(i, j), WB_cnt(i, j)));
		}
	}


	cout << result << endl;
}