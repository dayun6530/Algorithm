#include<iostream>
#include<queue>

using namespace std;

int N, M, V;
int arr[1001][1001];
bool vi[1001] = {false};

void init() {
	for (int i = 0; i <= 1000; i++) {
		vi[i] = false;
	}
}

void dfs(int s) {

    printf("%d ",s);
	vi[s] = true;

	for (int i = 1; i <= N; i++) {
		if (arr[s][i] && !vi[i]) {
			dfs(i);
		}
	}

}

void bfs(int s) {
	queue<int> q;
	int i = 0;

	q.push(s);
	vi[s] = true;

	while (!q.empty()) {
		int news = q.front();
		vi[news] = true;
		printf("%d ", news);
		q.pop();

		for (i = 1; i <= N; i++) {
			if (arr[news][i] && !vi[i]) {
				vi[i] = true;
				q.push(i);
			}
		}
	}
}

int main() {

	cin >> N >> M >> V;

	int src, dest;

	for (int i = 1; i <= M; i++) {
		cin >> src >> dest;
		arr[src][dest] = 1;
		arr[dest][src] = 1;
	}

	dfs(V);
	cout << ("\n");

	init();

	bfs(V);
	cout << ("\n");

	return 0;
}