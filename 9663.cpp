#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
int board[99999];
int n;

void path(int y) {
	int ko = 1;
	if (y == n) {
		cnt++;
		return;
	}
	for (int i = 0; i<n; i++) {
		ko = 1;
		for (int j = 0; j<y; j++) {
			if (board[j] == i || abs(y - j) == abs(i - board[j])) {
				ko = 0;
				break;
			}
		}
		if (ko) {
			board[y] = i;
			path(y + 1);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);

	cin >> n;
	cnt = 0;
	path(0);

	cout << cnt << '\n';

	int a;
	cin >> a;
}