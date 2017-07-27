#include <cstdio>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int m, n;
int tomato[1001][1001];
int depth[1001][1001];
queue<pair<int, int>> q;
int arrx[4] = { 1,-1,0,0 };
int arry[4] = { 0,0,1,-1 };

int main() {
	ios::sync_with_stdio(false);
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &tomato[i][j]);
			depth[i][j] = -1;
			if (tomato[i][j] == 1) {
				q.push(make_pair(i, j));
				depth[i][j] = 0;
			}
		}
	}

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i<4; i++)
		{
			int nx = x + arrx[i];
			int ny = y + arry[i];
			if (tomato[nx][ny] == 0 && depth[nx][ny] == -1)
			{
				if (nx >= 0 && ny >= 0 && nx < n && ny < m)
				{
					depth[nx][ny] = depth[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}


	int max = 0;
	bool is = true;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (depth[i][j] > max)
				max = depth[i][j];
			if (tomato[i][j] == 0 && depth[i][j] == -1)
				is = false;
		}
	}

	if (is)
		cout << max << endl;
	else
		cout << -1 << endl;

	cin >> n;
}