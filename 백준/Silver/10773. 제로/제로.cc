#include<iostream>
#include<stack>

using namespace std; 

int main() {

	int n;

	cin >> n;

	stack<int>st;
	int total = 0;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		if (num != 0) {
			st.push(num);
		}
		else {
			st.pop();
		}
	}

	long long sum = 0;
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}

	cout << sum << endl;
	return 0;
}