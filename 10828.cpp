#include <cstdio>
#include <iostream>
#include <string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int a;
	cin >> a;
	string b;
	int c;

	stack <int> stack;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b == "push") {
			cin >> c;
			stack.push(c);
		}
		else if (b == "pop") {
			if (stack.empty())
				cout << -1 << endl;
			else {
				cout << stack.top() << endl;
				stack.pop();
			}
			}
		else if (b == "size") {
			cout << stack.size() << endl;
		}
		else if (b == "empty") {
			cout << stack.empty() << endl;
		}
		else if (b == "top") {
			if (stack.empty())
				cout << -1 << endl;
			else 
			cout << stack.top() << endl;
		}
	}
	cin >> a;
}