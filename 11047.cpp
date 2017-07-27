#include<iostream>
#include<cstdio>
#include<queue>
#include<functional>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >>k;
	int coin[11];

	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	int cnt = 0;
	sort(coin, coin + n, greater<int>());
	for (int i = 0; i < n; i++) {
		if (k == 0)
			break;
		if (coin[i] > k)
			continue;
		else {
			int tmp = k / coin[i];
			k -= tmp*coin[i];
			cnt += tmp;
		}
	}

	cout << cnt << endl;
}