#include<iostream>
#include<vector>
#include<algorithm>

#define MAX 26

using namespace std;

int n;
string arr[MAX];
int component = 0;
int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };
bool vi[MAX][MAX] = { false };
vector<int>ans;
int cnt;

bool inRange(int y, int x) {
	if (0 <= y && y < n && 0 <= x && x < n) {
		return true;
	}
	return false;
}

void dfs(int y, int x) {

	vi[y][x] = true;
	cnt++;

	for (int i = 0; i < 4; i++) {
		int nextY = y + dy[i];
		int nextX = x + dx[i];

		if (inRange(nextY, nextX)) {
			if (arr[nextY][nextX] == arr[y][x] && !vi[nextY][nextX]) {
				dfs(nextY, nextX);
			}
		}
	}

}
int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == '1' && !vi[i][j]) {
				cnt = 0;
				dfs(i, j);
				component++;
				ans.push_back(cnt);
			}
		}
	}
    sort(ans.begin(), ans.end());

	cout << component << "\n";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}
}