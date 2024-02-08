#ifndef STUDENTS_LINKEDLIST_H_
#define STUDENTS_LINKEDLIST_H_

#include "Node.h"
#include <iostream>

template <typename T>
class LinkedList {
	Node<T>* head;
	Node<T>* tail;

public:
	LinkedList() {
		this->head = NULL;
		this->tail = NULL;
	}

	~LinkedList() {
		while (head != NULL) {
			pop_back();
			//std::cout << "delete NOTE\n";
		}
	}

	Node<T>* push_front(int group_index, T group_info) {

		Node<T>* ptr = new Node<T>(group_index, group_info);
		ptr->next = head;
		if (head != NULL)
			head->prev = ptr;
		if (tail == NULL)
			tail = ptr;
		head = ptr;
		return ptr;
	}

	Node<T>* push_back(int group_index, T group_info) {
		Node<T>* ptr = new Node<T>(group_index, group_info);
		ptr->prev = tail;
		if (tail != NULL)
			tail->next = ptr;
		if (head == NULL)
			head = ptr;
		tail = ptr;
		return ptr;
	}

	void pop_front() {
		if (head == NULL)
			return;
		Node<T>* ptr = head->next;
		if (ptr != NULL)
			ptr->prev = NULL;
		else
			tail = NULL;
		delete head;
		head = ptr;
	}

	void pop_back() {
		if (tail == NULL)
			return;
		Node<T>* ptr = tail->prev;

		if (ptr != NULL)
			ptr->next = NULL;
		else
			head = NULL;
		delete tail;
		tail = ptr;
	}

	Node<T>* getAt(int index) {
		Node<T>* ptr = head;
		int n = 0;
		// нужно добавить проверку индекса

		while (n != index) {
			if (ptr == NULL)
				throw std::out_of_range("Выход за границы списка!");
			ptr = ptr->next;
			++n;
		}
		return ptr;
	}

	Node<T>* operator[] (int index) {
		return getAt(index);
	}

	Node<T>* insert(int index, int group_index, T group_info) {
		Node<T>* right = getAt(index);
		if (right == NULL)
			return push_back(group_index, group_info);

		Node<T>* left = right->prev;
		if (left == NULL)
			return push_front(group_index, group_info);

		Node<T>* ptr = new Node<T>(group_index, group_info);
		ptr->prev = left;
		ptr->next = right;
		left->next = ptr;
		right->prev = ptr;

		return ptr;
	}

	void erase(int index) {
		Node<T>* ptr = getAt(index);
		if (ptr == NULL)
			return;
		if (ptr->prev == NULL) {
			pop_front();
			return;
		}
		if (ptr->next == NULL) {
			pop_back();
			return;
		}

		Node<T>* left = ptr->prev;
		Node<T>* right = ptr->next;
		left->next = right;
		right->prev = left;

		delete ptr;
	}

	void info(System::Windows::Forms::RichTextBox^ rtb, bool check) const {

		Node<T>* ptr = head;
		while (ptr != NULL) {
			ptr->info(rtb, check);
			ptr = ptr->next;
		}
	}

	int find_by_index(int group_index) {

		Node<T>* ptr = head;
		int n = 0;

		if (ptr == NULL)
			return -1;

		while (ptr != NULL) {
			if (ptr->return_group_index() == group_index)
				return n;
			++n;
			ptr = ptr->next;
		}

		return -1;
	}

	int total_price(System::Windows::Forms::RichTextBox^ rtb) {
		Node<T>* ptr = head;
		int total = 0;

		if (ptr == NULL)
			return 0;

		while (ptr != NULL) {
			total += ptr->total_price(rtb);
			ptr = ptr->next;
		}

		return total;
	}

	void find_by_cafedra(int cafedra, System::Windows::Forms::RichTextBox^ rtb) {
		Node<T>* ptr = head;

		if (ptr == NULL)
			return;

		while (ptr != NULL) {
			if (ptr->return_cafedra() == cafedra)
				ptr->info(rtb, false);
			ptr = ptr->next;
		}
	}
};

#endif // STUDENTS_LINKEDLIST_H_