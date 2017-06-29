#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	int board[100][100];
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			board[i][j] = 0;
		}
	}
	for (int n = 0; n < a; n++) {
		int b, c;
		cin >> b >> c;
		for (int i = b; i < b + 10; i++) {
			for (int j = b; j < c + 10; j++) {
				board[i][j] = 1;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (board[i][j] == 1)
				cnt++;
		}
	}
	
	cout << cnt;

}
