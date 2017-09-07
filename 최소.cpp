#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n, l;
	cin >> n >> l;
	int arr[5000000];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		int min = pow(10, 10);
		int minind = -1;
		if (i < l) {
			for (int j = 0; j <= i; j++)
				if (min > arr[i])
					min = arr[i];
			cout << min << " ";
		}
		else {

		}
	}
}