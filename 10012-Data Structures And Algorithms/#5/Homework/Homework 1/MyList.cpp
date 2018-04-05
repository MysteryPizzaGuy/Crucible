#include "MyList.h"

void MyList::push_back(int val)
{
	Node* newNode = new Node;
	newNode->val = val;
	newNode->nodeNxt = nullptr;
	if (head==nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->nodeNxt = newNode;
		newNode->nodePrev = tail;
		tail = newNode;
	}

}

MyList::MyList()
{
	head = nullptr;
	tail = nullptr;
}

void MyList::pop_back()
{
	Node* Previous = tail->nodePrev;
	if (head->nodeNxt != nullptr)
	{
		delete tail;
		Previous->nodeNxt = nullptr;
		tail = Previous;

	}
	else {
		delete head;
		tail = nullptr;
		head = nullptr;
	}
}

MyList::~MyList()
{
	while (tail!=nullptr)
	{
		pop_back();
	}
}
