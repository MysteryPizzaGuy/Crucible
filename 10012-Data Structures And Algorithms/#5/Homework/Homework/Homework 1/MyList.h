#pragma once
#include <iostream>
class MyList
{
private:
	struct Node
	{
		int val;
		Node* nodeNxt = nullptr;
		Node* nodePrev= nullptr;
	};
public:
	void push_back(int val);
	MyList();
	void display()
	{
		Node *temp = new Node;
		temp = head;
		while (temp != nullptr)
		{
			std::cout << temp->val << "\n";
			temp = temp->nodeNxt;
		}
	}
	void pop_back();
	~MyList();
private:
	Node * head;
	Node * tail;
};

