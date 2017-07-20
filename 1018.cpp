#include <cstdio>
#include <iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int cnt[3];
vector< vector<int>> arr;

int check(int x, int y, int size) {
	int start = arr[x][y];
	for(int i=y; i<y+size;i++){
		for (int j = x; j<x + size; j++) {
			if (arr[i][j] != start)
				return 2;
			return start;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	arr.resize(n);
	int tmp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			arr[i].push_back(tmp);
		}
	}
	}