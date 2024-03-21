#pragma once
//Class for elements
template <typename E>
class Node
{
private:
	//Fields
	E item;
	Node<E>* next;
	Node<E>* prev;
public:
	//Constructor & Destructor
	Node(Node<E>* prev, const E& item, Node<E>* next) : item(item), next(next), prev(prev) {}
	~Node() { next = prev = nullptr; }
	//Getters
	const E& getItem() { return item; }
	Node<E>* getNext() { return next; }
	Node<E>* getPrev() { return prev; }
	//Setters
	void setItem(const E& item) { this->item = item; }
	void setNext(Node<E>* next) { this->next = next; }
	void setPrev(Node<E>* prev) { this->prev = prev; }
};

//Class for control elements
template <typename E>
class Stack
{
private:
	int size = 0;
	Node<E>* first = nullptr;
	Node<E>* last = nullptr;
	//Funk clear all elements
	void clear();
public:
	~Stack() { clear(); }
	void push(const E& e);
	//Checks the presence of elements
	bool empty() { return size > 0 ? false : true; }
	const E& top();
	const E& pop();
	const int& getSize() { return size; }
};

//Destructor
template <typename E>
void Stack<E>::clear()
{
	for (Node<E>* x = first; x != nullptr; )
	{
		Node<E>* nextNode = x->getNext();
		x->~Node();
		x = nextNode;
	}
	first = last = nullptr;
	size = 0;
}

//Funk add element to Stack
template <typename E>
void Stack<E>::push(const E& e)
{
	Node<E>* l = last;
	Node<E>* newNode = new Node<E>(l, e, nullptr);
	last = newNode;
	if (l == nullptr)
		first = newNode;
	else
		l->setNext(newNode);
	size++;
}
//Get last element
template <typename E>
const E& Stack<E>::top()
{
	return last->getItem();
}
//Get last element and delete
template <typename E>
const E& Stack<E>::pop()
{
	const E& item = last->getItem();
	Node<E>* next = last->getNext();
	Node<E>* prev = last->getPrev();
	if (prev == nullptr)
	{
		first = next;
	}
	else
	{
		prev->setNext(next);
		last->setPrev(nullptr);
	}

	if (next == nullptr)
	{
		last = prev;
	}
	else
	{
		next->setPrev(prev);
		last->setNext(nullptr);
	}
	size--;
	return item;
}
