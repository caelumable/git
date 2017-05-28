#ifndef NODE_H
#define NODE_H

template <class T> class Node
{
private:
	Node<T> *next;
	T date;
public:
	Node (const T &date,Node <T> *next=NULL);//constructure
	void insertAfer(Node<T> *p);//
	Node<T> *deleteAfter();//delete the Node after the current Node
	Node<T> *nextNode();//get the net Node
	~Node {
		delete []next;
	}
};

template <class T> Node<T>::Node (const T&date,Node<T> *next=NULL)
{
	this->date=date;
	this->next=next;
}

template <class T> void Node<T>::insertAfer(Node<T> *p)
{
	Node<T> *lis=new 
}
