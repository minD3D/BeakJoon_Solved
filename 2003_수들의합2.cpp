#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	int arr[10001];
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (i == 0)
			arr[i] = tmp;
		else
			arr[i] = arr[i - 1] + tmp;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {//½ÃÀÛÁ¡
		for (int j = i; j < n; j++) {
			//cout << i << "," << j << endl;
			int sum;
			if (i == 0)
				sum = arr[j];
			else if (i == j)
				sum = arr[i] - arr[i - 1];
			else
				sum = arr[j] - arr[i-1];
			if (sum > m) {
				break;
			}
			if (sum == m) {
				cnt++;
				break;
			}
				
		}
	}

	cout << cnt << endl;
	//cin >> n;
}