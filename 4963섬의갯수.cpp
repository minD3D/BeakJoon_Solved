#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
using namespace std;
int w = 1, h = 1;
int board[50][50];
int arrx[8] = { 0,0,1,1,1,-1,-1,-1 };
int arry[8] = { 1,-1,1,0,-1,1,0,-1 };

bool isin(int x, int y) {
	if (x >= 0 & y >= 0 & x < h &y < w)
		return true;
	else return false;
}

void search(int x, int y) {
	board[x][y] = 0;
	for (int i = 0; i < 8; i++) {
		int dx = x + arrx[i];
		int dy = y + arry[i];
		if (isin(dx, dy)&board[dx][dy] == 1)search(dx, dy);
	}
}

int main() {
	ios::sync_with_stdio(false);
	while (1) {
		cin >> w >> h;
		if (w == 0 & h == 0)
			break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> board[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (board[i][j] == 1) {
					cnt++;
					search(i, j);
				}
			}
		}
		cout << cnt << endl;
	}
}