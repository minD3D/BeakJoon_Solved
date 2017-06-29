#include <cstdio>
#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
		a[i]=toupper(a[i]);

	string alpa = "ABCDEFGHIJKLMNOPQRSTUVIXYZ";
	int in[26];
	for (int i = 0; i < 26; i++)
		in[i] = 0;

	int index;
	for (int j = 0; j < a.length(); j++) {
		index = alpa.find(a[j]);
		if(index!=-1)
			in[index]=in[index]+1;
	}
	bool same = false;
	int max = 0;
	int maxaddr = 0;
	for (int i = 0; i < 26; i++) {
		if (in[i] > max) {
			max = in[i];
			maxaddr = i;
			same = false;
		}
		else if (in[i] == max)
			same = true;
	
	}

	if (same)
		cout << "?" << endl;
	else
		cout << alpa[maxaddr] << endl;
	cin >> a;
}