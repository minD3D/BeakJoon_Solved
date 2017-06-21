#include <iostream>
using namespace std;

int main() {

	int A;
	cin >> A;
	if (A % 5 == 0 && A % 3 == 0) {
		if (A > 0) {
			int res = A / 5;
			A -= res * 5;
			res += A / 3;
			cout << res << endl;
		}
		else
			cout << -1 << endl;		
	}
	else if (A % 5 == 0 && A % 3 != 0) {
		int res = A / 5;
		cout << res;
	}
	else if (A % 5 != 0 && A % 3 == 0) {
		int res = A / 3;
		cout << res;
	}
	else if (A % 5 != 0 && A % 3 != 0) {
		if (A > 0) {
			int res = 0;
			while (A != 0) {
				A -= 3;
				res++;
				if (A % 5 == 0) {
					res += A / 5;
					cout << res;
					break;
				}	
				if (A < 0) {
					cout << -1 << endl;
					break;
				}
			}
		}
		else
			cout << -1 << endl;	
	}
	else 
		cout << -1 << endl;
	
	}