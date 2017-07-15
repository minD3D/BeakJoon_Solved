#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int s, c;
int m = 0;
unsigned int lan[1000000];

void getlen(unsigned int left, unsigned int right) {
	unsigned int mid = (left + right) / 2;
	int sum = 0;
	for (int i = 0; i < s; i++) {
		sum += lan[i] / mid;
	}

	if (left > right)
		return;
	if (sum < c)
		getlen(left, mid - 1);
	else {
		if (mid > m)
			m = mid;
		getlen(mid + 1, right);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> s >> c;
	for (int i = 0; i < s; i++) {
		cin >> lan[i];
	}

	getlen(0, 10000000);

	unsigned long ramen = 0;
	for (int i = 0; i < s; i++) {
		ramen += lan[i] % m;
	}

	cout << ramen << endl;
}