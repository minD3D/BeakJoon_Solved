#include <cstdio>
#include <iostream>
#include<vector>
using namespace std;
int r, c;
vector<vector<char>>arr;

bool dfs(int x, int y) {
	if (x < 0 || x == r || arr[x][y] == 'x')return false;
	arr[x][y] = 'x';
	if (y == c - 1) {
		return true;
	}
	return dfs(x - 1, y + 1) || dfs(x, y + 1) || dfs(x + 1, y + 1);
}

int main() {
	ios::sync_with_stdio(false);

	cin >> r >> c;
	arr.resize(r);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			char a;
			cin >> a;
			arr[i].push_back(a);
		}
	}
	int res=0;
	for (int i = 0; i < r; i++) res += dfs(i, 0);
	cout << res << endl;
	cin >> r;
}