#include <cstdio>
#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int a;
	cin >> a;
	string b;
	int cnt = 0;
	for (int i = 0; i < a; i++) {
		cin >> b;
		string list = "";
		bool is = true;
		char current = ' ';
		for (int j = 0; j < b.length(); j++) {
			if (list.find(b[j]) == -1) {
				list += b[j];
				current = b[j];
			}
			else {
				if (b[j]!=current){
					is = false;
					list += b[j];
					//cout << "!!!";
					current = b[j];
				}
			}
			//cout<<j << list<<endl;
		}
		if (is)
			cnt++;	
	}
	cout << cnt << endl;
	cin >> a;
}