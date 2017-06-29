#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	string a;
	cin >> a;
	int cntj = 0, cnti = 0;
	for (int i = 0; i < a.length()-2; i++) {
		if (a[i] == 'J'&&a[i+1] == 'O'&&a[i+2] == 'I') {
			cntj++;
		}
		else if (a[i] == 'I'&&a[i + 1] == 'O'&&a[i + 2] == 'I') {
			cnti++;
		}
	}
	cout << cntj << "\n" << cnti << "\n";
	cin >> a;
}