//uva13055_Inception.cpp
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int n;
	string s;
	stack<string> name;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s[0] == 'S') {
			cin >> s;
			name.push(s);
		}
		else if (s[0] == 'K') {
			if (!name.empty()) 
				name.pop();
		}
		else {
			if (!name.empty())
				cout << name.top() << endl;
			else
				cout << "Not in a dream\n";
		}
	}

	return 0;
}