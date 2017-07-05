#include <cstdio>
#include <iostream>
#include<vector>
#include<queue>
#include<math.h>
#include<algorithm>
using namespace std;
/*
#define MAX_SIZE 1000
int a[MAX_SIZE][MAX_SIZE];
*/

int n, m, v;//정점 간선 시작할정점 번호
vector <vector<int>>adj;
vector <int>visited;
queue <int>q;
vector <int> discovered;

void bfs(int start) {
	discovered[start] = 1;
	q.push(start);
	int current;

	while (!q.empty()) {
		current = q.front();
		q.pop();
		cout << current + 1 << " ";
		for (int i = 0; i < adj[current].size(); i++) {
			if (!discovered[adj[current][i]]) {
				discovered[adj[current][i]] = 1;
				q.push(adj[current][i]);
			}
		}
	}
}

void dfs(int start) {
	cout << start + 1 << " ";
	visited[start] = 1;
	for (int i = 0; i < adj[start].size(); i++) {
		if (!visited[adj[start][i]])
			dfs(adj[start][i]);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m >> v;
	adj = vector<vector<int>>(n);
	visited = vector<int>(n, 0);
	discovered = vector<int>(n, 0);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		--a; --b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < n; i++) {
		sort(adj[i].begin(), adj[i].end());
	}

	dfs(v - 1);
	cout << endl;
	bfs(v - 1);
	cout << endl;

}