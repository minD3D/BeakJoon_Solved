#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int n, k;
int main() {
	ios::sync_with_stdio(false);
	cin >> n >> k;
	int *arr = new int[k];
	int *plug = new int[n];
	int *plugbin = new int[n];
	int cnt = 0;
	int num = 0;
	for (int i = 0; i < k; i++)
		cin >> arr[i];

	
	for (int i = 0; i < k; i++) {
		fill(plugbin, plugbin + n, 100000);
		bool isin = false;
		if (num != n) {//아직 자리가 있으면
			for (int j = 0; j < num; j++) {
				if (plug[j] == arr[i])
					isin = true;
			}
			if (!isin) {
				plug[num] = arr[i];
				num++;
			}
		}
		else {//다 차있으면
			for (int j = 0; j < n; j++) {
				if (arr[i] == plug[j])
					isin = true;
			}
			if (!isin)
				{
				//다차있고 포함되어있지 않으면 //미래에 나올지 확인 //즉. 모든 plug안의 리스트에 대해서 가장 나중이나 안나오는애
				for (int x = 0; x < n; x++) {//플러그에 꼽혀있는 애들
					for (int y = i + 1; y < k; y++) {//미래에 꼽힐 애들
						if (plug[x] == arr[y]) {
							plugbin[x] = y;
						}
					}
				}
				int maxplug = 0;
				int maxplugint = 0;
				for (int x = 0; x < n; x++) {
					if (plugbin[x] > maxplug) {
						maxplug = plugbin[x];
						maxplugint = x;
					}
				}
				plug[maxplugint] = arr[i];
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	cin >> cnt;
}