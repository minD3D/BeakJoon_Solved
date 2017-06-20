#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<char> vec;
	char str[100000];
	cin.getline(str, 10000);
	string a = str;
	for (int i = 0; i < a.length(); i++){
			vec.push_back(str[i]);
	}

	int len = a.length() - 1;
	int pnt = a.length() - 1;
	
	char in[100];
	char buf[100];

	int input;
	cin >> input;
	for(int k=0; k<input ;k++){
		cin.getline(in, 100);
		a = in;
		switch (in[0]) {
		case 'L':
			if (pnt != 0)
				pnt--;
		case 'D':
			if (pnt != len)
				pnt++;
		case 'B':
			for (int i = pnt + 1; i <= len; i++)
				vec[i - 1] = vec[i];
			len--;
		case 'P':
			int tmp = 0;
			for (int i = pnt; i <= len; i++) {
				buf[tmp] = vec[i];
				tmp++;
				vec.pop_back();
			}
			for (int i = 1; i < a.length(); i++) {
				vec.push_back(in[i]);
			}
			for (int i = 0; i < tmp; i++) {
				vec.push_back(buf[i]);
			}
		}
	}

	for(int v=0; v<vec.size(); v++)
		cout << vec[v];
}