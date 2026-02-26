#include<iostream>
#include<cstring>

using namespace std;

int M, N, K;
int arr[51][51];
bool vi[51][51];
int x, y;


int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

void dfs(int y, int x) {
	
	vi[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int nextY = y + dy[i];
		int nextX = x + dx[i];
		
		if (0 <= nextX && nextX < M && 0 <= nextY && nextY < N) {
			if (!vi[nextY][nextX] && arr[nextY][nextX] == 1) {
				dfs(nextY, nextX);
			}
		}
	}
}

int main() {
	
	int T;

	cin >> T;

	while (T--) {
		int cnt = 0;

		// M => 가로길이 N => 세로길이
		cin >> M >> N >> K;

		//초기화
		memset(vi, false, sizeof(vi));
		memset(arr, 0, sizeof(arr));

	
		//배추 위치 찍기
		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			arr[y][x] = 1;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M ; j++) {
				if (arr[i][j] == 1 && !vi[i][j]) {
					cnt++;
					dfs(i, j);
					
				}
			}
		}
		
		cout << cnt << endl;
		
	}

	return 0;
}