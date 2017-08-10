#include<iostream>
#include<cstdio>
using namespace std;

template<typename T>
class Node {
private:
	T Data;
	Node* child;
	Node* sibling;
public:
	//생성자
	Node(T data) {
		this->Data = data;
		child = NULL;
		sibling = NULL;
	}
	//소멸자
	~Node() {
		DeleteNode(child);
		DeleteNode(sibling);
	}
	void DeleteNode(Node* n) {
		if (n == NULL)return;
		delete n;
	}
	//설정자
	void SetData(T data) {
		this->Data = data;
	}
	void SetChilde(Node* child) {
		this->child = child;
	}
	void SetSibling(Node* sibling) {
		this->sibling = sibling;
	}
	//접근자
	T GetData() {
		return data;
	}
	Node* GetChild() {
		return child;
	}
	Node* GetSibling() {
		return sibling;
	}
};

template<typename T>
class Tree {
private:
	Node<T>* root;
	Node<T>* pnt;
public:
	Tree() {
		root = NULL;
		pnt = NULL;
	}
	Tree(T data) {
		root = new Node<T>(data);
		pnt = root;
	}
	~Tree() {
		delete root;
	}
	void SetRoot(T data) {
		root = new Node<T>(data);
		pnt = root;
	}
	void SetPNT(Node<T>* n) {
		pnt = n;
	}

	Node<T> *GetRoot() {
		return root;
	}

	Node<T> *GetPNT() {
		return pnt;
	}

	void NodeChangeData(T data) {
		pnt->SetData(data);
	}

	void ParentInsertChild(T data) {
		Node<T> *tmp;
		if (pnt == NULL)pnt->SetChilde(new Node<T>(data));
		else {
			tmp = pnt->GetChild();
			if (tmp == NULL) {
				pnt->SetChilde(new Node<T>(data));
				return;
			}
			while (true) {
				if (tmp->GetSibling() == NULL) {
					tmp->SetSibling(new Node<T>(data));
					break;
				}
				tmp = tmp->GetSibling();
			}

		}
	}

	void ParentDeleteChild(T data) {
		Node<T>* tmp = NULL;
		Node<T>* pre = NULL;
		tmp = pnt->GetChild();
		if (tmp = NULL) {
			cout << "data가 없습니다" << endl;
			return;
		}
		if (tmp->GetData() == data) {
			pnt->SetChilde(tmp->GetSibling());
			tmp->SetSibling(NULL);
			delete tmp;
			return;
		}
		while (true) {
			pre = tmp;
			tmp = tmp->GetSibling();
			if (tmp = NULL)return;
			if (tmp->GetData() == data) {
				pre->SetSibling(tmp->GetSibling());
				tmp->SetSibling(NULL);
				delete tmp;
				break;
			}
		}
		if (tmp == NULL)cout << "data가 없습니다" << endl;
	}
	void PrintChild() {
		Node<T>* tmp = pnt->GetChild();
		if (tmp == NULL) cout << "child가 없습니다." << endl;
		else {
			while (true) {
				if (tmp == NULL) break;
				cout << tmp->GetData() << endl;
				tmp = tmp->GetSibling();
			}
			cout << endl;
		}
	}
};

int main() {
	ios::sync_with_stdio(false);
	
}