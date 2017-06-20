#include<iostream>
#include<string>
#include<queue>
using namespace std;

int N;
char pic[101][101];
char npic[101][101];
bool visit[101][101];
bool nvisit[101][101];
int acnt=0, ncnt=0;

int checkArea(int row, int col, char color){
	//오른쪽과 아래가 같은 색이면 방문했다고 처리
	if (pic[row+1][col] == color && visit[row+1][col] == false) {
		visit[row + 1][col] = true;
		checkArea(row + 1, col, color);
	}

	if (pic[row][col+1] == color && visit[row][col + 1] == false) {
		visit[row][col+1] = true;
		checkArea(row, col + 1, color);
	}

	if (pic[row - 1][col] == color && visit[row - 1][col] == false) {
		visit[row - 1][col] = true;
		checkArea(row - 1, col, color);
	}

	if (pic[row][col - 1] == color && visit[row][col-1] == false) {
		visit[row][col - 1] = true;
		checkArea(row, col -1, color);
	}

	return 0;
}


int checkArea1(int row, int col, char color) {
	//오른쪽과 아래가 같은 색이면 방문했다고 처리
	if (npic[row + 1][col] == color && nvisit[row + 1][col] == false) {
		nvisit[row + 1][col] = true;
		checkArea1(row + 1, col, color);
	}

	if (npic[row][col + 1] == color && nvisit[row][col + 1] == false) {
		nvisit[row][col + 1] = true;
		checkArea1(row, col + 1, color);
	}

	if (npic[row - 1][col] == color && nvisit[row - 1][col] == false) {
		nvisit[row - 1][col] = true;
		checkArea1(row - 1, col, color);
	}

	if (npic[row][col - 1] == color && nvisit[row][col - 1] == false) {
		nvisit[row][col - 1] = true;
		checkArea1(row, col - 1, color);
	}

	return 0;
}
int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			pic[i][j] = 1;
			visit[i][j] = true;
			nvisit[i][j] = true;

		}
	}
	char tmp;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> tmp;
			pic[i][j]= tmp;
			if (tmp == 'R')
				npic[i][j] = 'G';
			else
				npic[i][j] = tmp;
			tmp = 0;
			visit[i][j] = false;
			nvisit[i][j] = false;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visit[i][j] == false){
				checkArea(i, j, pic[i][j]);
				acnt++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			//cout << npic[i][j] << " ";
			if (nvisit[i][j] == false) {
				checkArea1(i, j, npic[i][j]);
				ncnt++;
			}
		}
		//cout << endl;
	}
	cout << acnt<< " " <<ncnt;
//	cin >> ncnt;
}