#include "DynTempQueue.h"
#include "iostream"
#include "cstdlib"
using namespace std;

void DynIntQueue::enqueue(int num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);
		rear = rear->next;
	}
}

void DynIntQueue::dequeue(int& num)
{
	QueueNode* temp;
	if (isEmpty())
	{
		cout << "The Queue is Empty.\n";
		exit(1);
	}
	else
	{
		num = front->value;
		temp = front;
		front = front->next;
		delete temp;
		temp = nullptr;
	}
}

bool DynIntQueue::isEmpty() const
{
	if (front == nullptr)
		return true;
	else
		return false;
}

void DynIntQueue::clear()
{
	int value; // dummy variable

	while (!isEmpty())
	{
		dequeue(value);
	}
}
