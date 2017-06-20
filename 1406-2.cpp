#include<iostream>
#include<stack>
using namespace std;

int main() {
	stack<char> In;
	stack<char> buf;

	char str[100000];
	int n;
	cin >> str >> n;
	char menu;
	for (int i = 0; str[i]; i++)
		In.push(str[i]);
	while (n--) {
		cin >> menu;
		if (menu == 'L'&&!In.empty()) {
			buf.push(In.top());
			In.pop();
		}
		else if (menu == 'D'&&!buf.empty()) {
			In.push(buf.top());
			buf.pop();
		}
		else if (menu == 'B'&&!In.empty()) {
			In.pop();
		}
		else if (menu == 'P') {
			cin >> menu;
			In.push(menu);
		}

	}

	while (!In.empty()) {
		buf.push(In.top());
		In.pop();
	}
	while (!buf.empty()) {
		cout << buf.top();
		buf.pop();
	}
	cin >> menu;
}