#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;
	cin >> str;

	int idx;
	for (char a = 'a'; a <= 'z'; a++) {
		idx = str.find(a);
		cout << idx << " ";
	}

	cout << endl;
	return 0;
}