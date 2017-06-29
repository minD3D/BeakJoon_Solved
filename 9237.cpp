#include <cstdio>
#include <iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int a;
	cin >> a;

	int *tree = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> tree[i];
	}

	sort(tree, tree+a, greater<int>());
	int time=tree[0];
	int res;

	for (int i = 1; i < a; i++){
		time--;
		if (tree[i] > time)
			time = tree[i];
	}

	res = time + a +1;
	cout << res << endl;
	cin >> a;

}