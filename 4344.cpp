#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, scr;
	cin >> a;
	while (a--) {
		cin >> b;
		int *arr = new int[b];
		int avg = 0;
		for (int i = 0; i < b; i++) {
			cin >> scr;
			avg += scr;
			arr[i] = scr;
		}
		avg /= b;
		double cnt = 0;
		for (int i = 0; i < b; i++) {
			if (arr[i] > avg)
				cnt++;
		}

		printf("%.3f%% \n", cnt / (double)b * 100);

	}
	cin >> b;
}