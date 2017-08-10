#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
using namespace std;
int n, m;
vector<vector<int>> adj;
vector<bool> visited;
int cnt = 0;
int cntvisite = 0;
void bfs(int num) {
	queue<int> q;
	q.push(num);
	visited[num] = true;
	cntvisite++;
	while (!q.empty()) {
		int here = q.front();
		q.pop();
		for (int next : adj[here]) {
			if (!visited[next]) {
				visited[next] = true;
				cntvisite++;
				q.push(next);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	
	cin >> n >> m;
	adj.resize(10001);
	visited.resize(10001, false);
	for (int i = 0; i < m; i++) {
		int st,ed;
		cin >> st >> ed;
		adj[ed].push_back(st);
		adj[st].push_back(ed);
	}
	for (int i = 0; i < n; ++i)
		sort(adj[i].begin(), adj[i].end());

	while (cntvisite != n) {
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				bfs(i);
				cnt++;
				break;
			}
		}
	}
	cout << cnt <<endl;
	cin >> n;
	
}