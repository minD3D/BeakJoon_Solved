#include <cstdio>
#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	string a;
	cin >> a;
	string alpa[] = { "c=","c-","dz=","d-","lj","nj","s=","z="};
	int cnt = 0;
	for (int j = 0; j < 8; j++) {
		int num = 0;
		for (int i = 0; i < a.length(); i++) {
			num = a.find(alpa[j], num);
			if (num != -1) {
				cnt++;	num++;
		//		cout << i <<alpa[j]<< endl;
			}
		}
	}

	int num = 0;
	int cnt1 = 0;
	for (int i = 0; i < a.length(); i++) {
		num = a.find("dz=", num);
		if (num != -1) {
			cnt1++;	num++;
		}
	}
	if (cnt1 != 0) {
		cout << a.length() - (2 * cnt + 3 * cnt) + cnt + cnt1 << endl;
	}
	else
		cout << a.length()-cnt*2 + cnt+cnt1;
	cin >> a;
}