#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
//greedy 로 시도해보자
int n;
int time[16];
int cost[16];
int day = 1;
int fcost = 0;

int cntcost(int day) {
	fcost = 0;
	while (day <= n) {
		if (day + time[day] <= n+1) {
			fcost += cost[day];
			day += time[day];
		}
		else break;
	}
	return fcost;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &time[i], &cost[i]);
	}
	int maxcost = 0;
	for (int i = 1; i <= n; i++) {
		if (maxcost < cntcost(i))
			maxcost = cntcost(i);
	}
	cout << maxcost << endl;
	cin >> n;
}