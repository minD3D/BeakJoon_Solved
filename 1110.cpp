#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b=0, c;
	cin >> a;
	if (a > 100 || a < 0)
		return 0;
	else if (a == 0)
		cout << 1;
	else {
		c = a;
		int cnt = 0;
		while (c != b) {
			if (a < 10)
				b = 10 * a + a;
			else {
				b = (a % 10) * 10 + (a / 10 + a % 10) % 10;
			}
			a = b;
		
			cnt++;
		}
		cout << cnt;
	}
	cin >> a;
}