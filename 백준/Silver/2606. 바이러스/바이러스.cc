#include<iostream>
#include<vector>
#define MAX 101

using namespace std;

int N, M;
vector<int> graph[MAX];
bool vi[MAX] = { false, };
int cnt = 0;
void dfs(int s) {
	vi[s] = true;

	for (int i = 0; i < graph[s].size(); i++) {
		int next = graph[s][i];
		if (!vi[next]) {
			dfs(next);
			cnt++;
		}
	}
}

int main() {
	cin >> N >> M;

	int tmp1, tmp2;

	for (int i = 0; i < M; i++) {
		cin >> tmp1 >> tmp2;
		graph[tmp1].push_back(tmp2);
		graph[tmp2].push_back(tmp1);
	}

	dfs(1);

	cout << cnt << endl;
	return 0;
}