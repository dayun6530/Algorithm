#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
	int n;
	cin >> n;

	priority_queue<int>pq;
	
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		pq.push(-tmp);
	}

	int sum = 0;
	int total = 0;
	while (!pq.empty()) {
		int num = -pq.top();
		sum = sum + num;
		total += sum;
		pq.pop();
	}

	cout << total;
}