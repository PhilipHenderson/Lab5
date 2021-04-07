#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class DynTempStack
{
public:
	DynTempStack();
	DynTempStack(const DynTempStack& obj);
	~DynTempStack() = default;

	T push(T num);
	T pop(T&);

	bool isEmpty() const;
private:

	class StackNode
	{
		friend class DynTempStack;
		T value; // Value Of Something
		StackNode * next;

		// Constructor
		StackNode(T value1, StackNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	StackNode* top;
};

template <class T>
DynTempStack<T>::DynTempStack()
{
    top = nullptr;
}

template <class T>
DynTempStack<T>::DynTempStack(const DynTempStack& obj)
{
    top = obj.top;
}

template <class T>
T DynTempStack<T>::push(T num)
{
    top = new StackNode(num, top);
    return num;
}

template <class T>
T DynTempStack<T>::pop(T& num)
{
    StackNode* temp;

    if (isEmpty())
    {
        cout << "The Stack is empty" << endl; // i dont liek this. ok for programmers but nto for end users
        exit(1);
    }
    else
    {
        //stack contains items
        num = top->value;
        //worry about deleting the item
        temp = top;
        top = top->next;
        delete temp;
        temp = nullptr; // not in the book, should do it anyways RANGLED THE DANGLE
    }
}

template <class T>
bool DynTempStack<T>::isEmpty() const
{
    if (!top)
        return true;
    else
        return false;
}