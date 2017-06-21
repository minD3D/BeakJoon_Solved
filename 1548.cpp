#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a,b;
	cin >> a;
	double *arr = new double[a];
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + a);
	double res = 0;
	for (int i = 0; i < a; i++) {
		res += (arr[i] / arr[a - 1] * 100);
		//cout << res << endl;
	}
	res /= (double)a;

	printf("%.2f", res );
	cin >> a;
}