#include<iostream>
#include<vector>
#include<cstring>

#define MAX 20001

using namespace std;

int test_case;
int V, E;
int tmp1, tmp2;
vector<int> graph[MAX];
int nodeColor[MAX] = { 0, };	//node의 색깔을 저장

void dfs(int nodeNum, int color) {
	
	nodeColor[nodeNum] = color;		//nodeColor에 color 저장

	for (int i = 0; i < graph[nodeNum].size(); i++) {
		int next = graph[nodeNum][i];
		if (!nodeColor[next]) {
			dfs(next, 3 - color);
		}
	}
}

bool Check() {	//연결된 노드의 색깔이 인접하지 않은지 확인
	for (int i = 1; i <= V; i++) {
		for (int j = 0; j < graph[i].size(); j++) {
			int next = graph[i][j];
			if (nodeColor[i] == nodeColor[next]) {
				return false;
			}
		}
	}
	return true;
}

int main() {

	cin >> test_case;

	while (test_case--) {

		for (int i = 1; i <= MAX; i++)
			graph[i].clear();

		memset(nodeColor, 0, sizeof(nodeColor));

		cin >> V >> E;
		for (int i = 0; i < E; i++) {
			cin >> tmp1 >> tmp2;
			
			//그래프에 노드 저장
			graph[tmp1].push_back(tmp2);
			graph[tmp2].push_back(tmp1);
		}
		
		for (int j = 1; j <= V; j++)
			if (!nodeColor[j])
				dfs(j, 1);
			
		if (Check()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}