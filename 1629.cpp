#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
using namespace std;
long long A, B, C;
int f(long long a, int b)
{
	if (b == 0)return 1;
	if (b == 1)return a%C;
	if (b % 2 == 0)return f((a*a) % C, b / 2);
	else return (a*f((a*a) % C, (b - 1) / 2)) % C;
}
int main() {
	cin >> A >> B >> C;
	printf("%d", f(A, B));
}