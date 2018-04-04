#include "MyList.h"



MyList::MyList()
{
	
}

void MyList::push_back(int val)
{
	iterator newNode = new Node;
	(*newNode).setVal(val);
	(*current).setNodeNxt(newNode);
	(*newNode).setNodePrev(current);
}

MyList::iterator MyList::begin()
{
	return head.getNodeNxt();
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

MyList::iterator::iterator()
{
	p = nullptr;
}

MyList::iterator::iterator(Node * ptr)
{
	p = ptr;
}

MyList::iterator::~iterator()
{
}

MyList::iterator MyList::iterator::operator=(Node * ptr)
{
	return p = ptr;
}

MyList::iterator MyList::iterator::operator++()
{
	return p = &(p->getNodeNxt());
}

MyList::iterator MyList::iterator::operator--()
{
	return p = &(p->getNodePrev());
}



MyList::Node& MyList::iterator::operator*()
{
	return *p;
}

MyList::Node * MyList::iterator::operator&()
{
	return p;
}
