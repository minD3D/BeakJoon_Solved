#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cin >> a;
	int i = 0;
	int index = 0;

	while (index < a.length()) {
		for (i = 0; i < 10; i++) {
			if (index > a.length())
				break;
			if (a[index] != NULL)
				cout << a[index];
			index++;
		}
		cout << endl;
	}
	cin >> i;
}