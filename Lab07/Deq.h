#pragma once
#include<stdlib.h>

template <typename T>
class BaseDeq {
public:
	BaseDeq() :head(NULL), tail(NULL), count(0) {}
	~BaseDeq() {}

	int getSize() { return count; }
	virtual T popFront() = 0;
	virtual T popBack() = 0;
	virtual void display() = 0;
	virtual void pushFront(T x) = 0;
	virtual void pushBack(T x) = 0;
	virtual void del(int x) = 0;
	virtual bool verify() = 0;
protected:
	struct Node {
		T x;
		Node *next, *prev;
	};
	int count;
	Node *head, *tail;
};

template <typename T>
class Deq : public BaseDeq<T>{
public:
	Deq();
	~Deq();

	T popFront() override;
	T popBack() override;
	void display() override;
	void pushFront(T x) override;
	void pushBack(T x) override;
	void del(int x) override;
	bool verify() override;
};

template <typename T>
Deq<T>::Deq() : BaseDeq<int>() {}

template <typename T>
Deq<T>::~Deq() {
	while (head) {
		tail = head->next;
		delete head;
		head = tail;
	}
}

template <typename T>
T Deq<T>::popFront() {

	if (count > 2) {
		Node *temp = new Node;
		temp = head;
		head = head->next;
		head->prev = NULL;
		count--;
		return temp->x;
	}
	else if (count == 2) {
		Node *temp = new Node;
		temp = head;
		head = tail;
		head->prev = NULL;
		count--;
		return temp->x;
	}
	else if (count == 1) {
		Node *temp = new Node;
		T x = head->x;
		head->next = NULL;
		head = NULL;
		tail->prev = NULL;
		tail = NULL;
		count = 0;
		return x;
	}
	else {
		return 0;
	}
}

template <typename T>
T Deq<T>::popBack() {

	if (count > 2) {
		Node *temp = new Node;
		temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		count--;
		return temp->x;
	}
	else if (count == 2) {
		Node *temp = new Node;
		temp = tail;
		tail = head;
		head->prev = NULL;
		count--;
		return temp->x;
	}
	else if (count == 1) {
		Node *temp = new Node;
		T x = head->x;
		head->next = NULL;
		head = NULL;
		tail->prev = NULL;
		tail = NULL;
		count = 0;
		return x;
	}
	else {
		return 0;
	}
}

template <typename T>
void Deq<T>::display() {
	Node *temp = tail;
	while (temp != NULL) {
		cout << temp->x << " ";
		temp = temp->prev;
	}
	cout << ": " << getSize() << endl;
}

template <typename T>
void Deq<T>::pushFront(T x) {
	Node *temp = new Node;
	temp->prev = NULL;
	temp->x = x;

	if (head != NULL) {
		temp->next = head;
		head->prev = temp;
		head = temp;
		count++;
	}
	else {
		temp->next = NULL;
		head = tail = temp;
		count++;
	}
}

template <typename T>
void Deq<T>::pushBack(T x) {
	Node *temp = new Node;
	temp->next = NULL;
	temp->x = x;

	if (head != NULL) {
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
		count++;
	}
	else {
		temp->prev = NULL;
		head = tail = temp;
		count++;
	}
}

template <typename T>
void Deq<T>::del(int x) {
	if (x <= count && x != 0) {
		if ((x == 1) && (head->next)) {
			Node *temp = new Node;
			temp = head;
			head = head->next;
			head->prev = NULL;
			delete temp;
			count--;
			return;
		}
		else if ((x == 1) && (head == tail)) {
			head->next = NULL;
			head = NULL;
			tail = NULL;
			count = 0;
			return;
		}
		if (x == count) {
			Node *temp = new Node;
			temp = tail;
			tail = tail->prev;
			tail->next = NULL;
			delete temp;
			count--;
			return;
		}

		Node *temp1 = new Node, *temp2;
		temp1 = temp2 = head;
		for (int i = 0; i < x; i++) {
			temp1 = temp1->next;
		}

		temp2 = temp1;
		temp2->prev->next = temp1->next;
		temp2->next->prev = temp1->prev;
		delete temp1;
		count--;
	}
}

template <typename T>
bool Deq<T>::verify() {
	if (count == 0) {
		return false;
	}
	return true;
}