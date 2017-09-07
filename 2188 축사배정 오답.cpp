#include<iostream>
#include<vector>
using namespace std;
int n, m;
int visited[202];
vector<vector<int>> wish;
int cnt = 0;
int maxcnt = 0;
bool again = false;
int dfs(int a, int b) {
	if (visited[wish[a][b]] == 1) {
		if (wish[a].size() > b + 1) {
			dfs(a, b + 1);
		}
		else {
			if (a == n-1) {
				if (again)return 0;
				else {
					again = true;
					dfs(0, 0);
				}
				}
			else {
				dfs(a + 1, 0);
			}
		}
	}
	else if (visited[wish[a][b]] == 0) {
		visited[wish[a][b]] = 1;
		cnt++;
	}
}
int main() {
	cin >> n >> m;
	wish.resize(n);
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
 		while (num--) {
			int a;
			cin >> a;
			wish[i].push_back(a);
		}
	}

	for (int i = 0; i < n; i++) {
		again = false;
		dfs(i, 0);
		if (cnt > maxcnt)
			maxcnt = cnt;
		cnt = 0;
	}

	cout << maxcnt << endl;
	cin >> n;
}