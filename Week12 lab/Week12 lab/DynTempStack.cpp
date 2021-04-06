#include "DynTempStack.h"
#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
DynTempStack<T>::DynTempStack()
{
    top = nullptr;
}

template <class T>
T DynTempStack<T>::push(T num)
{
    top = new StackNode(num, top);
}

template <class T>
T DynTempStack<T>::pop(T& num)
{
    StackNode* temp;

    if (isEmpty())
    {
        cout << "The Stack is empty" << endl; // i dont liek this. ok for programmers but nto for end users
        exit(1);                               // i dont liek this
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
