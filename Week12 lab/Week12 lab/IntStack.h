#pragma once

class IntStack
{
public:
	IntStack(int capacity); // Constructor
	~IntStack() { delete[] stackArray; };

	void push(int value);
	void pop(int& value);
	bool isEmpty() const;

	//Stack Exceptions
	class Overflow {};
	class Underflow {};
private:
	int* stackArray;
	int capacity;
	int top;
};