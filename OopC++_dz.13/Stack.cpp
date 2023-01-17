#include "Stack.h"

Stack::Stack(int size)
{
	this->size = size;
	stack = new char[size];
	top = -1;
}

Stack::~Stack()
{
	delete[] stack;
}

void Stack::push(char c)
{
	if (isFull())
	{
		cout << "Stack is full!" << endl;
		return;
	}
	stack[++top] = c;
}

char Stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty!" << endl;
		return 0;
	}
	return stack[top--];
}

int Stack::count()
{
	return top + 1;
}

bool Stack::isEmpty()
{
	return top == -1;
}

bool Stack::isFull()
{
	return top == size - 1;
}

void Stack::clear()
{
	top = -1;
}

char Stack::topEl()
{
	if (isEmpty())
	{
		cout << "Stack is empty!" << endl;
		return 0;
	}
	return stack[top];
}

int main() {
	Stack stack(5);
	stack.push('a');
	stack.push('b');
	stack.push('c');
	stack.push('d');
	stack.push('e');
	stack.push('f');
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.count() << endl;
	cout << stack.isEmpty() << endl;
	cout << stack.isFull() << endl;
	stack.clear();
	cout << stack.isEmpty() << endl;
	cout << stack.isFull() << endl;
	cout << stack.topEl() << endl;
	return 0;
}