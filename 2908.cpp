#include <cstdio>
#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int a,b;
	cin >> a>>b;
	int aaa[3];
	int bbb[3];
	int result = 0;
	for (int i = 0; i < 3; i++) {
		aaa[i] = a % 10;
		a /= 10;
		bbb[i] = b % 10;
		b /= 10;
		if (result == 0)
			if (aaa[i] > bbb[i])
				result = 1;
			else if (aaa[i] < bbb[i])
				result = 2;
	}

	if (result == 1)
		for (int i = 0; i < 3; i++)
			cout << aaa[i];
	else
		for (int i = 0; i < 3; i++)
			cout << bbb[i];

	cout << endl;

	cin >> a;
}