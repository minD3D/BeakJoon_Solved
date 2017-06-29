#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int a;
	string b;
	cin >> a;

	while (a--) {
		int cnt = 0;
		int scr = 0;
		cin >> b;
		for (int i = 0; i < b.length(); i++) {
			if (b[i] == 'O') {
				cnt++;
				scr += cnt;
			}
			else {
				cnt = 0;
			}
				
		}
	
		cout << scr << endl;
	}

	cin >> a;
}