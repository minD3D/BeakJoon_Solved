#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int n;
int cnt=0;
vector<vector<bool>> alpa;
vector<bool> tmp;
void set(int n) {
	int i, j;
	for (i = 0; i < (1 << (n)); i++) {
		for (j = 0; j < n; j++) {
			if (i&(1 << j)) {
				for (int x = 0; x < 26; x++)
					tmp[x] = alpa[j][x] | tmp[x];
			}
		}
		bool allone = true;
		for (int x = 0; x < 26; x++)
			if(tmp[x] != 1)
				allone=false;
		if (allone)
			cnt++;
		for (int x = 0; x < 26; x++)
			tmp[x] = false;
	}
	cout << cnt << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin>>n;
	alpa.resize(n);
	tmp.resize(26);
	for (int i = 0; i < n; i++) {
		alpa[i].resize(26);
		fill(alpa[i].begin(), alpa[i].end(), false);
	}
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < tmp.length(); j++) {
			if (tmp[j] == 'a')
				alpa[i][0] = true;
			else if(tmp[j] == 'b')
				alpa[i][1] = true;
			else if(tmp[j] == 'c')
				alpa[i][2] = true;
			else if (tmp[j] == 'd')
				alpa[i][3] = true;
			else if (tmp[j] == 'e')
				alpa[i][4] = true;
			else if (tmp[j] == 'f')
				alpa[i][5] = true;
			else if (tmp[j] == 'g')
				alpa[i][6] = true;
			else if (tmp[j] == 'h')
				alpa[i][7] = true;
			else if (tmp[j] == 'i')
				alpa[i][8] = true;
			else if (tmp[j] == 'j')
				alpa[i][9] = true;
			else if (tmp[j] == 'k')
				alpa[i][10] = true;
			else if (tmp[j] == 'l')
				alpa[i][11] = true;
			else if (tmp[j] == 'm')
				alpa[i][12] = true;
			else if (tmp[j] == 'n')
				alpa[i][13] = true;
			else if (tmp[j] == 'o')
				alpa[i][14] = true;
			else if (tmp[j] == 'p')
				alpa[i][15] = true;
			else if (tmp[j] == 'q')
				alpa[i][16] = true;
			else if (tmp[j] == 'r')
				alpa[i][17] = true;
			else if (tmp[j] == 's')
				alpa[i][18] = true;
			else if (tmp[j] == 't')
				alpa[i][19] = true;
			else if (tmp[j] == 'u')
				alpa[i][20] = true;
			else if (tmp[j] == 'v')
				alpa[i][21] = true;
			else if (tmp[j] == 'w')
				alpa[i][22] = true;
			else if (tmp[j] == 'x')
				alpa[i][23] = true;
			else if (tmp[j] == 'y')
				alpa[i][24] = true;
			else if (tmp[j] == 'z')
				alpa[i][25] = true;
		}
	}
	set(n);
	cin >> n;
}