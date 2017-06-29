#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector <int> vec;
	vec.push_back(1);
	int res = 0;
	int tmp;
	vector<int>::iterator it;

	for (int i = 1; i < 10000; i++) {
		tmp = i;
		while (tmp > 0) {
			res += tmp % 10;
			tmp /= 10;
		}
		res += i;
		it = find(vec.begin(), vec.end(), res);
		if (res<10000)
			if (it == vec.end()) {
				vec.push_back(res);
				//cout << vec[i] << ":" << res << endl;
			}
		res = 0;
	}
	sort(vec.begin(), vec.end());
	cout << 1 << endl;
	for (int i = 0; i < vec.size() - 1; i++) {
		if (vec[i] + 1 != vec[i + 1])
			for (int j = vec[i] + 1; j < vec[i + 1]; j++) {
				cout << j << endl;
			}
	}
	int a;
	cin >> a;
}