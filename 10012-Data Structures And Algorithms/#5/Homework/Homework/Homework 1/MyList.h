#pragma once
class MyList
{
class Node;
public:
	//typedef Node* iterator;
	class iterator
	{
	public:
		iterator();
		iterator(Node* ptr);
		~iterator();

		iterator operator=(Node* ptr);
		iterator operator++();
		iterator operator--();
		Node& operator*();
		Node* operator&();
	private:
		Node * p;
	};
public:
	MyList();
	void push_back(int val);
	iterator begin();
	~MyList();
private:
	class Node
	{
	public:
		Node();
		Node(iterator NodePrev, int val);
		~Node();
		iterator getNodeNxt() const;
		iterator getNodePrev() const;
		int getVal() const;
		void setVal(int val);
		void setNodeNxt(iterator nodeNxt);
		void setNodePrev(iterator nodePrev);
	private:
		iterator nodeNxt;
		iterator nodePrev;
		int* val = new int;
	};
private:
	Node head;
	iterator current =&head;
	Node tail;
};

