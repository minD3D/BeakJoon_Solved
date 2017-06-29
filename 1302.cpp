#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int a;
	string b;
	cin >> a;
	string book[1000];

	for (int i = 0; i < a; i++) {
		cin >> book[i];
	}
	sort(book, book + a);
	int cnt = 1;
	int maxcnt = 0;
	int maxidx;
	for (int i = 1; i < a; i++) {
		if (book[i] == book[i - 1]) {
			cnt++;
			if (maxcnt < cnt) {
				maxcnt = cnt;
				maxidx = i;
			}
		}
		else {
			cnt = 0;
		}
	}
	
	cout << book[maxidx] << "\n";
	cin >> a;
}