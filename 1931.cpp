#include<iostream>
#include<cstdio>
#include<queue>
#include<functional>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<int, int>> meeting;
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		meeting.push_back(make_pair(e, s));//sort를 위해 end부터
	}
	sort(meeting.begin(), meeting.end());

	int time = 10000000;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (time > meeting[n - i].first) {
			time = meeting[n - i].second;
			cnt++;
		}
	}
	cout << cnt<< endl;

	
	cin >> n;
}