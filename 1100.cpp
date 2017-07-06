#include <cstdio>
#include <iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int a=8;
	int flag = 1;
	int cnt = 0;
	for (int i = 0; i < 8;i++) {
		string b;
		cin >> b;
		if (i % 2 == 0)
			flag = 1;
		else if (i % 2 == 1)
			flag = 2;

		for (int j = 0; j < 8; j++) {
			if (flag == 1) {
				if (j % 2 == 0 && b[j] == 'F')
					cnt++;
			}
			else if (flag == 2) {
				if (j % 2 == 1 && b[j] == 'F')
					cnt++;
			}		
		}
	}

	cout << cnt << endl;

}