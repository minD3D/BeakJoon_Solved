#include<iostream>
#include<queue>
using namespace std;

//linked list
class Node {
	friend class List;
public:
	Node() {
		data = 0;
		next = NULL;
	};
	Node(int i) {
		data = i;
		next = NULL;

	}
private:
	Node *next;
	int data;
};

class List {
private:
	Node *head;
public:
	List() {
		head = NULL;
	};
	List(Node *insertNode) {
		head = NULL;
		insert(insertNode);
	};
	void insert(Node *insertNode);
	void del(int delNum);
};

void List::insert(Node *insertNode) {
	if (head == NULL) {
		head = insertNode;
	}
	else {
		Node *current = head;
		Node *beforeCurrent = NULL;
		for (Node *ptr = head; ptr != NULL; ptr = ptr->next)current = ptr;
		current->next = insertNode;
	}
}

void List::del(int delNum) {
	if (head != NULL) {
		Node *current = head;
		Node *beforeCurrent = NULL;
		for (Node *ptr = head; ptr != NULL; ptr = ptr->next) {
			beforeCurrent = current;
			current = ptr;
			if (current->data == delNum) {
				if (beforeCurrent == head&& current == head)head = current->next;
				else beforeCurrent->next = current->next;
				delete current;
				return;
			}
		}
	}
}

int main() {
	int in;
	cin >> in;
	List *linked = new List();
	Node *inputN = new Node(in);
	linked->insert(inputN);
}