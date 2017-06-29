#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string c;
		cin >> b >> c;
		for (int j = 0; j < c.size(); j++)
			for (int n = 0; n < b; n++) {
				cout << c.at(j);
			}
		cout << "\n";
	}
	cin >> a;
}