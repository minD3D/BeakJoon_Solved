#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	vector<pair<int, int>> vec;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int x, y;
		cin >> x >> y;
		vec.push_back(make_pair(x, y));
	}

	sort(vec.begin(), vec.end());
	for (int i = 0; i < a; i++) {
		printf("%d ", vec[i].first);
		printf("%d\n", vec[i].second);
	}
	cin >> a;
}