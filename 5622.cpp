#include <cstdio>
#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	string a;
	cin >> a;
	string alpa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cnt = 0;
	for (int i = 0; i < a.length(); i++) {
		int num = alpa.find(a[i]);
		if (num < 3)
			cnt += 3;
		else if (num < 6)
			cnt += 4;
		else if (num < 9)
			cnt += 5;
		else if (num < 12)
			cnt += 6;
		else if (num < 15)
			cnt += 7;
		else if (num < 19)
			cnt += 8;
		else if (num < 22)
			cnt += 9;
		else if (num < 26)
			cnt += 10;

	}
	cout << cnt;
	cin >> a;
}