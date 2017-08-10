#include <iostream>
#include <cstdio>

using namespace std;


struct TREE
{
	char val;
	TREE *left;
	TREE *right;
};
TREE *ptr[30 + 'Z'];

void makeTree(char t1, char t2, char t3)
{
	ptr[t1]->val = t1;

	// .�� �ƴϸ� t2(t3) ���� �ְ�, .�̸� NULL���� �ִ´�.
	if (t2 != '.')
		ptr[t1]->left = ptr[t2];
	else
		ptr[t1]->left = NULL;
	if (t3 != '.')
		ptr[t1]->right = ptr[t3];
	else
		ptr[t1]->right = NULL;

}


void PreorderTraverse(int now)
{
	printf("%c", now);
	if (ptr[now]->left != NULL)
		PreorderTraverse(ptr[now]->left->val);
	if (ptr[now]->right != NULL)
		PreorderTraverse(ptr[now]->right->val);

}


void InorderTraverse(int now)
{
	if (ptr[now]->left != NULL)
		InorderTraverse(ptr[now]->left->val);
	printf("%c", now);
	if (ptr[now]->right != NULL)
		InorderTraverse(ptr[now]->right->val);
}


void PostorderTraverse(char now)
{
	if (ptr[now]->left != NULL)
		PostorderTraverse(ptr[now]->left->val);
	if (ptr[now]->right != NULL)
		PostorderTraverse(ptr[now]->right->val);
	printf("%c", now);
}


int main()
{
	TREE tree;
	int n;
	char t1, t2, t3;
	scanf("%d", &n);

	// ptr[i + 'A'] �� �ǹ̴� ������ �迭���� 'A'�� �ƽ�Ű �ڵ尪 ����
	// n��ŭ�� ���� �Ҵ��� ���ְ��� �ϴ� ���̴�.
	// �̷��� �Ͽ� ptr['A']ó�� �ٷ� �ƽ�Ű �ڵ带 �־��ֱ� ���� �̿��Ͽ���.
	for (int i = 0; i < n; i++)
	{
		ptr[i + 'A'] = (TREE*)malloc(sizeof(TREE) + 1);
		ptr[i + 'A']->val = 'e';
	}

	for (int i = 0; i < n; i++)
	{
		cin >> t1 >> t2 >> t3;
		makeTree(t1, t2, t3);
	}

	// ����, ����, ���� ��ȸ
	PreorderTraverse('A');
	cout << endl;
	InorderTraverse('A');
	cout << endl;
	PostorderTraverse('A');

	return 0;
}


