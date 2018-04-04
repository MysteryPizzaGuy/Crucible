#include "MyList.h"



MyList::MyList()
{
	
}

void MyList::push_back(int val)
{
	iterator newNode = new Node;
	
}


MyList::~MyList()
{
}

MyList::Node::Node()
{
	val = nullptr;
}

MyList::Node::Node(iterator NodePrev, int val)
{
	this->nodePrev = NodePrev;
	*(this->val) = val;
}

MyList::Node::~Node()
{
	delete val;
}

MyList::iterator MyList::Node::getNodeNxt() const
{
	return nodeNxt;
}

MyList::iterator MyList::Node::getNodePrev() const
{
	return nodePrev;
}

int MyList::Node::getVal() const
{
	return *val;
}

void MyList::Node::setVal(int val)
{
	*(this->val) = val;
}

void MyList::Node::setNodeNxt(iterator nodeNxt)
{
	this->nodeNxt = nodeNxt;
}

void MyList::Node::setNodePrev(iterator nodePrev)
{
	this->nodePrev = nodePrev;
}
