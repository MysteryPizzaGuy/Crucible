#pragma once
class MyList
{
class Node;
public:
	//typedef Node* iterator;
	class iterator
	{
		Node* p;
	public:
		
		iterator();
		~iterator();

		iterator operator++() {
			
		}
	private:
		Node* 
	};
public:
	MyList();
	void push_back(int val);
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
	Node tail;
	iterator current = head;

};

