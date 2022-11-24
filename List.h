#include <iostream>
#include "Node.h"

using namespace std;

class List {
	protected:
		Node<int>* head = NULL;
		Node<int>* tail = NULL;
	public:
		List();
		void createList();
		void shift(int);
		void append(int);
		void show();
};

List::List() {
	this->head = NULL;
}

void List::createList() {
	int x;
	this->head = NULL;
	this->tail = NULL;

	cout << "Ends with -1" << endl;

	do {
		cin >> x;
		Node<int>* node = new Node<int>(x);

		if (this->tail == NULL) this->tail = node;

		node->setNode(this->head);
		if (x != -1) this->head = node;
	} while (x != -1);
}

void List::shift(int value) {
	Node<int>* node = new Node<int>(value);

	if (this->head != NULL) {
		node->setNode(this->head);
		this->head = node;
		return;
	}

	this->tail = node;
	this->head = node;
}

void List::append(int value) {
	Node<int>* node = new Node<int>(value);

	if (this->tail != NULL) {
		this->tail->setNode(node);
		this->tail = this->tail->getNode();

		return;
	}

	this->tail = node;
	this->head = node;
}

void List::show() {

	cout << "List values: [";

	while (this->head != NULL) {
		cout << (*this->head).getValue();
		this->head = (*this->head).getNode();

		if (this->head != NULL) cout << ", ";
	}

	cout << "]" << endl;

}