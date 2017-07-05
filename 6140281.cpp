#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
queue<pair<int, int>> q;
int fx[] = { 1,1,2,2,-1,-1,-2,-2 }, fy[] = { 2,-2,1,-1,2,-2,1,-1 };
int main() {
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	while (a--) {
		int l, ax, ay, bx, by;
		cin >> l >> ax >> ay >> bx >> by;
		int dis[300][300] = {};
		q.push({ ax,ay });
		dis[ax][ay] = 1;
		while (!q.empty()) {
			for (int i = 0; i < 8; i++) {
				int tmpx = q.front().first + fx[i];
				int tmpy = q.front().second + fy[i];
				if (tmpx >= 0 && tmpx < l&&tmpy >= 0 && tmpy < l && dis[tmpx][tmpy] == 0) {
					dis[tmpx][tmpy] = dis[q.front().first][q.front().second] + 1;
					q.push({ tmpx,tmpy });
				}
			}
			q.pop();
		}
		cout << dis[bx][by]-1 << endl;
	}
	cin >> a;
}