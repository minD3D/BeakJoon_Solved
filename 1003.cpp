#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int cnt0 = 0, cnt1 = 0;
int fibo(int n) {
	if (n == 0)
		cnt0++;
	else if (n == 1)
		cnt1++;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main() {
	ios::sync_with_stdio(false);
	
	int t,n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cnt0 = 0;
		cnt1 = 0;
		cin >> n;
		fibo(n);
		cout << cnt0 << " " << cnt1 << endl;
	}

	int a;
	cin >> a;
}