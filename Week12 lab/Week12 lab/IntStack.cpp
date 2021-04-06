#include "IntStack.h"

IntStack::IntStack(int capacity)
{
    this->capacity = capacity;
    stackArray = new int[capacity];
    top = 0;
}

void IntStack::push(int value)
{
    //check if the stack is full
    if(top == capacity)
    {
        //Throw an overflow exception that can be cought in a catch statment
        // you need both "try" and "catch" statments together
        throw IntStack::Overflow();
    }
    //stack is not full, insert intem into the next available slot
    stackArray[top] = value;
    top++;
}

void IntStack::pop(int& value)
{
    if (isEmpty())
    {
        throw IntStack::Underflow();
    }
    //stck is not empty
    top--;
    value = stackArray[top];
}

bool IntStack::isEmpty() const
{
    if (top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
