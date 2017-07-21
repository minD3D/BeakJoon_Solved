#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
vector<vector<int>> paper;
int res[3];

int func(int x, int y, int l) {
	int ck = 0;
	int c = paper[x][y];
	if (l == 1) {
		res[c + 1]++;
		return c;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int t = func(x + l / 3 * i, y + l / 3 * j, l / 3);
			if (t == 2 || c^t)ck = 1;
		}
	}
	if (!ck)res[c + 1] -= 8;
	return ck ? 2 : c;
}
int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	paper.resize(n);

	for (int i = 0; i < n; i++) {
		int tmp = n;
		int in;
		while (tmp--) {
			cin >> in;
			paper[i].push_back(in);
		}
	}

	func(0, 0, n);
	
	for (int i = 0; i < 3; i++)
		cout << res[i] << endl;

	
	int a;
	cin >> a;
}