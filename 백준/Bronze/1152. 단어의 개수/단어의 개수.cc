#include<iostream>
#include<string>

using namespace std;

const int MAX = 50;

int main() {
	
	string a;
	int cnt = 1;
	getline(cin, a);

	for (int i = 0; i < a.length(); i++) {
		if (a.at(i) == ' ') {
			cnt++;
		}
	}
	if (a.at(0) == ' ') {
		cnt--;
	}
	if (a.at(a.length() - 1) == ' ') {
		cnt--;
	}
	cout << cnt << endl;

	return 0;
}