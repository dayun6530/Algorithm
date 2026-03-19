#include<iostream>
#include<queue>

using namespace std;

int main() {

	int n;
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
	cin >> n;

	priority_queue<int> pq;
	
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num == 0 && pq.empty()) {
			cout << 0 << "\n";
		}
		else if (num != 0) {
			pq.push(num);
		}
		else {
			cout << pq.top() << "\n";
			pq.pop();
		}
	}
	return 0;
}