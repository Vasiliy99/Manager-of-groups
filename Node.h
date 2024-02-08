#ifndef STUDENTS_NODE_H_
#define STUDENTS_NODE_H_

#include "DayGroup.h"
#include "NightGroup.h"
#include "PayGroup.h"

template <typename T>
class Node
{
	int index;
	T* group;

public:

	Node* prev = nullptr;
	Node* next = nullptr;

	Node(int in, T gr) {
		//std::cout << "Node()\n";
		index = in;
		group = new T(gr);
		prev = nullptr;
		next = nullptr;
	}

	Node(const Node& a) {
		//std::cout << "Node(const Node&)\n";
		this->index = a.index;
		group = new T(*a.group);
	}

	~Node() {
		//std::cout << "~Node()\n";
		delete group;
	}

	void info(System::Windows::Forms::RichTextBox^ rtb, bool check) {
		std::cout << "\n" << " Индекс группы : " << index;
		rtb->Text = rtb->Text + "\n" + " Индекс группы : " + index;
		group->info(rtb, check);
	}

	int return_group_index() const {
		return index;
	}

	int total_price(System::Windows::Forms::RichTextBox^ rtb) {
		rtb->Text = rtb->Text + "Доход от группы " + index + ": " + group->total_price() + "\n";
		return group->total_price();
	}

	T return_group() const {
		return *group;
	}

	int return_cafedra() const {
		return group->return_cafedra();
	}
};

#endif // STUDENTS_NODE_H_