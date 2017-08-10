#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
char arr[26] = { 'A','B','C' };

struct tree {
	char val;
	int left, right;
};
struct tree tarr[100];

void preorder(int tmp) {
	if (tmp >= 'A') {
		cout << (char)tmp;
		preorder(tarr[tmp].left);
		preorder(tarr[tmp].right);
	}
}
void inorder(int tmp) {
	if (tmp >= 'A') {
		inorder(tarr[tmp].left);
		cout << (char)tmp;
		inorder(tarr[tmp].right);
	}
}
void postorder(int tmp) {
	if (tmp >= 'A') {
		postorder(tarr[tmp].left);
		postorder(tarr[tmp].right);
		cout << (char)tmp;
	}
}
int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		tarr[a].left = b;
		tarr[a].right = c;
	}

	preorder('A');
	cout << endl;
	inorder('A');
	cout << endl;
	postorder('A');
	cout << endl;
	cin >> n;

}