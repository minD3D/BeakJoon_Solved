#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int n, k;
int main() {
	ios::sync_with_stdio(false);
	cin >> n >> k;
	int *arr = new int[k];
	int *plug = new int[n];
	int *plugbin = new int[n];
	int cnt = 0;
	int num = 0;
	for (int i = 0; i < k; i++)
		cin >> arr[i];

	
	for (int i = 0; i < k; i++) {
		fill(plugbin, plugbin + n, 100000);
		bool isin = false;
		if (num != n) {//���� �ڸ��� ������
			for (int j = 0; j < num; j++) {
				if (plug[j] == arr[i])
					isin = true;
			}
			if (!isin) {
				plug[num] = arr[i];
				num++;
			}
		}
		else {//�� ��������
			for (int j = 0; j < n; j++) {
				if (arr[i] == plug[j])
					isin = true;
			}
			if (!isin)
				{
				//�����ְ� ���ԵǾ����� ������ //�̷��� ������ Ȯ�� //��. ��� plug���� ����Ʈ�� ���ؼ� ���� �����̳� �ȳ����¾�
				for (int x = 0; x < n; x++) {//�÷��׿� �����ִ� �ֵ�
					for (int y = i + 1; y < k; y++) {//�̷��� ���� �ֵ�
						if (plug[x] == arr[y]) {
							plugbin[x] = y;
						}
					}
				}
				int maxplug = 0;
				int maxplugint = 0;
				for (int x = 0; x < n; x++) {
					if (plugbin[x] > maxplug) {
						maxplug = plugbin[x];
						maxplugint = x;
					}
				}
				plug[maxplugint] = arr[i];
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	cin >> cnt;
}