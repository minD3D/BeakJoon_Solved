#include<iostream>
#include<utility>
#include<vector>
#include <queue>
using namespace std;
int N, M;
vector <pair<int, int>> relation[100000];

int Dikstra(int node) {
	priority_queue<pair<int, int>> pq;
	vector<int> dist(1000, 1000000);

	dist[node] = 0;
	pq.push(make_pair(0, node));
	while (!pq.empty()) {
		int min_dist = -pq.top().first;
		int min_node = pq.top().second;
		pq.pop();

		for (int v = 0; v < relation[min_node].size(); v++) {
			int next_node = relation[min_node][v].first;
			int next_dist = min_dist+relation[min_node][v].second;
			if (next_dist < dist[next_node]) {
				dist[next_node] = next_dist;
				pq.push(make_pair(-next_dist, next_node));
			}
		}
	}

	int ret = 0;
	for (int i = 1; i <= N; i++)
		ret += dist[i];

	return ret;
}

int main1() {

	cin >> N >> M;
	
	
	int a, b;
	for (int m = 0; m < M; m++)
	{
		cin >> a >> b;
		relation[a].push_back(make_pair(b,1));
		relation[b].push_back(make_pair(a, 1));
	}

	int result;
	int min_kevin = 1000000;
	int min_node;
	for (int v = 1; v <= N; v++) {
		result = Dikstra(v);
		if (result < min_kevin) {
		
			min_kevin = result;
			min_node = v;
		}

	}
	cout << min_node << endl;
	return 0;
}