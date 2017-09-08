#include <iostream>
#include <vector>
#define INF 1000000
using namespace std;
int time[16];
int cost[16];
int n;
int dp[16];
int main() {
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &time[i], &cost[i]);
	}
	int curt = n;
	for (int i = n; i > 0; i--) {
		if (i + time[i] <= n + 1) {
			dp[i]
		}
	}


}
