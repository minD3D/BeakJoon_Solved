#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
#include <math.h>
#include <stdio.h>
#include<string>

using namespace std;

vector<vector<int>> board;
queue<int> lastx;
queue<int> lasty;


//빈칸 카운터 가로 세로 네모
int garo[9][10];
int sero[9][10];
int nemo[9][10];
int garosum[9] = { 0,0,0,0,0,0,0,0,0 };
int serosum[9] = { 0,0,0,0,0,0,0,0,0 };
int nemosum[9] = { 0,0,0,0,0,0,0,0,0 };

int findnemo(int i, int j) {
	if (i < 3) {
		if (j < 3) return 0;
		else if (j < 6)return 1;
		else return 2;
	}
	else if (i < 6) {
		if (j<3)return 3;
		else if (j<6)return 4;
		else return 5;
	}
	else {
		if (j<3)return 6;
		else if (j<6)return 7;
		else return 8;
	}
}

int func(int m){
	if (m == 81) {

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}

		return 1;
	}
	
	int x = m / 9;
	int y = m % 9;

	if (board[x][y] != 0) {
		func(m + 1);
	}
	else
	for (int i = 1; i <= 9; i++) {
		if (garo[x][i] != 1 && sero[y][i] != 1 && nemo[findnemo(x, y)][i] != 1) {
			board[x][y] = i;
			garo[x][i] = 1;
			sero[y][i] = 1;
			nemo[findnemo(x, y)][i] = 1;
			func(m + 1);
			board[x][y] = 0;
			garo[x][i] = 0;
			sero[y][i] = 0;
			nemo[findnemo(x, y)][i] = 0;

		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	board.resize(9);
	int in;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
		{
			cin >> in;
			if (in != 0) {
				garo[i][in] = 1;
				sero[j][in] = 1;
				nemo[findnemo(i, j)][in] = 1;
			}
			board[i].push_back(in);
		}
		}

	func(0);


	int a;
	cin >> a;
}