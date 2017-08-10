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

	int time = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (time < meeting[i].first) {
			time = meeting[i].second;
			cnt++;
		}
	}
	cout << cnt << endl;


	cin >> n;
}