#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
char result[4];
vector<char> arr;
int l, c;
char mo[5] = { 'a','e','i','o','u' };

void dfs(int d, int now) {
	result[d-1] = arr[now];
	if (d == l)
	{
		bool is = false;
		int cntmo = 0;
		for (int i = 0; i < l; i++) {
			if (result[i] == mo[0] || result[i] == mo[1] || result[i] == mo[2] || result[i] == mo[3] || result[i] == mo[4])
			{
				is = true;
				cntmo++;
			}
		}
		if (is&&cntmo <= l - 2) {
			for (int i = 0; i < l; i++)
				cout << result[i];
			cout << "\n";
		}
		return;
	}
	for (int i = now+1; i<c; i++)
		dfs(d + 1, i);
}

int main() {
	ios::sync_with_stdio(false);

	cin >> l >> c;
	for (int i = 0; i < c; i++) {
		char tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < c; i++) {
		dfs(1, i);
	}
	
	int a;
	cin >> a;
}