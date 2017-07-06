#include <cstdio>
#include <iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int n, m;
vector<vector<char>>arr;
int result=0;

int check(int checkx, int checky) {
	
	int br = 0, wr = 0;
	bool flag;

	for (int x = checkx; x < checkx + 8; x++) {
		if (x % 2 == 0)
			flag = true;
		else
			flag = false;
		for (int y = checkx; y < checkx + 8; y++) {
			if (flag) {
				if (y % 2 == 0) {
					if (arr[x][y] == 'B')
						wr++;
					else if (arr[x][y] == 'W')
						br++;
				}
				else {
					if (arr[x][y] == 'B')
						br++;
					else if (arr[x][y] == 'W')
						wr++;
				}
			}
			else {
				if (y % 2 == 1) {
					if (arr[x][y] == 'B')
						wr++;
					else if (arr[x][y] == 'W')
						br++;
				}
				else {
					if (arr[x][y] == 'B')
						br++;
					else if (arr[x][y] == 'W')
						wr++;
				}
			
			}
		}
	}
	if (br > wr)
		result = wr;
	else
		result = br;
	return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;

	arr.resize(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char a;
			cin >> a;
			arr[i].push_back(a);
		}
	}

	int min = 1000000;
	for (int k = 0; k < n - 7; k++) {
		for (int l = 0; l < m - 7 ; l++) {
			int tmp = check(k, l);
			if (min > tmp) {
				min = tmp;
			}
		}
	}

	cout << min << endl;
	cin >> n;
}