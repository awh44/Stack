#ifndef _STACK_H_
#define _STACK_H_

#include <cstddef>

#include "../Node/Node.h"

template <class T>
class Stack
{
	public:
		Stack(); //"MAKENULL" substitute
		~Stack();
		T top();
		void pop();
		void push(T x);
		bool empty();

	private:
		Node<T> *head_;
};

template <class T>
Stack<T>::Stack()
{
	head_ = NULL;
}

template <class T>
Stack<T>::~Stack()
{
	while (head_ != NULL)
	{
		Node<T> *next = head_->get_next();
		delete head_;
		head_ = next;
	}
}

template <class T>
T Stack<T>::top()
{
	return (*head_).get_data();
}

template <class T>
void Stack<T>::pop()
{
	Node<T> *temp = head_;
	head_ = head_->get_next();
	delete temp;
}

template <class T>
void Stack<T>::push(T x)
{
	head_ = new Node<T>(x, head_);
}

template <class T>
bool Stack<T>::empty()
{
	return head_ == NULL;
}
#endif
