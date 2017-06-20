#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int n = 0;
	while (1) {
		n++;
		getline(cin, str);

		if (atoi(str.c_str()) == EOF | n > 100)
			break;

		cout << str << endl;
	}

}