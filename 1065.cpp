#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a;
	cin >> a;
	int cnt = 0;
	for (int i = 1; i <= a; i++) {
		if (i < 100) {
			cnt = i;
		}
		else if (i == 1000) break;
		else if (i > 100) {
			int tmp = i;
			vector <int> vec;

			vec.push_back(tmp % 10);
			tmp /= 10;
			vec.push_back(tmp % 10);
			tmp /= 10;
			vec.push_back(tmp % 10);
			tmp /= 10;

			int sub = vec[1] - vec[0];
			if (sub == vec[2] - vec[1]) {
				cnt++;
			
			}


		}
	}
	cout << cnt << endl;
	cin >> a;
}