#include <cstdio>
#include <iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string a;
	cin >> a;
	stack<char> st1;
	int mul = 1, res = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '(') {
			st1.push(a[i]);
			mul *= 2;
			if (a[i + 1] == ')')
				res += mul;
		}
		else if (a[i] == '[') {
			st1.push(a[i]);
			mul *= 3;
			if (a[i + 1] == ']')
				res += mul;
		}
		else if (!st1.empty() && a[i] == ')') {
			mul /= 2;
			if (st1.top() == '(')
				st1.pop();
			else {
				res = 0;
				break;

			}
			
		}
		else if (!st1.empty() && a[i] == ']') {
			mul /= 3;
			if (st1.top() == '[')
				st1.pop();
			else {
				res = 0;
				break;
			}
			
		}
		else{
			res = 0;
			break;
		}
	}
	if (!st1.empty())
		res = 0;
	cout << res << endl;
	cin >> a;
}