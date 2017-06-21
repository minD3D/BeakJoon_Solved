#include <cstdio>
#include <iostream>
#include <list>
#include<algorithm>
using namespace std;

int main() {
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr , arr+3);
	cout << arr[1];

	/*
	list <int> li;
	li.push_back(a);
	li.push_back(b);
	li.push_back(c);

	li.sort();
	li.pop_front();
	cout << li.front();

	*/
	
}