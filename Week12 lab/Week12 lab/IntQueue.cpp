#include "IntQueue.h"
#include <iostream>
#include <cstdlib>
using namespace std;

IntQueue::IntQueue(int size)
{
    queueArray = new int[size];
    queueSize = size;
    clear();
}

void IntQueue::enqueue(int num)
{
    if (isFull())
    {
        cout << "The Queue is Full. \n" << endl;
        exit(1);
    }
    else
    {
        //calculate new rear position
        rear = (rear + 1) % queueSize;
        //Insert the item
        queueArray[rear] = num;
        //update Item count
        numItems++;
    }
}

void IntQueue::dequeue(int& num)
{
    if (isEmpty())
    {
        cout << "The Queue Is Empty.\n";
        exit(1);
    }
    else
    {
        // move front
        front = (front +1) % queueSize;
        //retrieve the front item
        num = queueArray[front];
        numItems--;
    }
}

bool IntQueue::isEmpty() const
{
    if (numItems > 0)
        return false;
    else
        return true;

}

bool IntQueue::isFull() const
{
    if (numItems < queueSize)
        return false;
    else
        return true;
}

void IntQueue::clear()
{
    front = -1;
    rear = -1;
    numItems = 0;
}
