#include<iostream>
#include<queue>

#define MAX 100000 + 1

using namespace std;

bool inRange(int node) {
	if (0 <= node && node <= 100000)
		return true;
	return false;
}
int depth[MAX] = { 0 };
int main() {

	int me, you;
	queue<int>q;
	cin >> me >> you;

	//처음 시작 위치
	q.push(me);

	//앞으로의 탐색 과정
	while (!q.empty()) {

		int cur = q.front();
		int next[3];
		q.pop();

		if (cur == you) {
			cout << depth[cur] << endl;
			break;
		}
		next[0] = cur - 1;
		next[1] = cur + 1;
		next[2] = cur * 2;
		
		for (int i = 0; i < 3; i++) {
			if (inRange(next[i]) && !depth[next[i]]) {
				depth[next[i]] = depth[cur] + 1;
				q.push(next[i]);
			}
		}

	}
	return 0;
}