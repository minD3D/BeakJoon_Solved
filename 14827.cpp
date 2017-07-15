#include <cstdio>
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int s, c;
	cin >> s >> c;
	vector<int> lan;
	int tmp;
	for (int i = 0; i < s; i++) {
		cin >> tmp;
		lan.push_back(tmp);
	}

	long long left = 0;
	long long right = 1000000;
	int max = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		int result = 0;

		for (int i = 0; i < s; i++) {
			result += lan[i] / mid;
		}

		if (result >= c) {
			left = mid + 1;
			if (mid > max)
				max = mid;
		}
		else
			right = mid - 1;
	}
	int ramen = 0;
	for (int i = 0; i < s; i++) {
		ramen+=lan[i] % max;
	}
	cout << ramen << endl;
	cin >> s;
}