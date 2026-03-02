#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX = 10000 + 1;

int parent[MAX], setSize[MAX];

int findParent(int node) {
	if (node == parent[node]) {
		return node;
	}
	return parent[node] = findParent(parent[node]);
}

void merge(int node1, int node2) {
	node1 = findParent(node1);
	node2 = findParent(node2);

	if (node1 != node2) {
		if (setSize[node1] < setSize[node2]) {
			swap(node1, node2);
		}
		parent[node2] = node1;
		setSize[node1] += setSize[node2];
		setSize[node2] = 0;
	}
}

struct Edge {
	int u, v, weight;

	bool operator<(const Edge &e){
		return weight < e.weight;
	}
};

int main() {
	
	int V, E;
	cin >> V >> E;

	vector<Edge> edge;
	for (int i = 0; i < E; i++) {
		int u, v, w;
		cin >> u >> v >> w;

		edge.push_back({ u,v,w });
	}

	sort(edge.begin(), edge.end());

	for (int i = 0; i < V; i++) {
		parent[i] = i;
		setSize[i] = 1;
	}

	long long result = 0;
	for (int i = 0; i < edge.size(); i++) {
		Edge e = edge[i];
		if (findParent(e.u) != findParent(e.v)) {
			result += e.weight;
			merge(e.u, e.v);
		}
	}
	cout << result << "\n";
	return 0;
}