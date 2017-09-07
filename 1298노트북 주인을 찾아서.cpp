#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int n, m;
bool adj[102][5002];
vector<int> type1, type2;
vector<bool> visited;

bool dfs(int a) {
	if (visited[a]) return false;
	visited[a] = true;
	for (int b = 0; b < m; b++) {
		if (adj[a][b]) {
			if (type2[b] == -1 || dfs(type2[b])) {
				type1[a] = b;
				type2[b] = a;
				return true;
			}
		}
	}
	return false;
}

int match() {
	type1 = vector<int>(n, -1);
	type2 = vector<int>(m, -1);
	int cnt = 0;
	for (int st = 0; st < n; st++) {
		visited = vector<bool>(n, false);
		if (dfs(st))++cnt;
	}
	return cnt;
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int no1,no2;
		scanf("%d %d", &no1,&no2);
		adj[no1-1][no2-1] = 1;
		}
	cout << match() << endl;
	cin >> n;
}