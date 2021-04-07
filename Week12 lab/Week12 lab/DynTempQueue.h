#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class DynTempQueue
{
public:
	//constructor
	DynTempQueue();
	DynTempQueue(const DynTempQueue& obj);
	~DynTempQueue() { clear(); }

	T enqueue(T);
	T dequeue(T&);
	bool isEmpty() const;
	void clear();
private:
	class QueueNode
	{
		friend class DynTempQueue;
		T value;
		QueueNode* next;

		//constructor
		QueueNode(T val1, QueueNode* next1 = nullptr)
		{
			value = val1;
			next = next1;
		}
	};

	QueueNode* front;
	QueueNode* rear;
};

template<class T>
inline DynTempQueue<T>::DynTempQueue()
{
	front = nullptr; rear = nullptr; 
}

template<class T>
inline DynTempQueue<T>::DynTempQueue(const DynTempQueue& obj)
{
	front = obj.front; rear = obj.rear;
}


template <class T>
T DynTempQueue<T>::enqueue(T num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
		return num;
	}
	else
	{
		rear->next = new QueueNode(num);
		rear = rear->next;
	}
}

template <class T>
T DynTempQueue<T>::dequeue(T& num)
{
	QueueNode* temp;
	if (isEmpty())
	{
		cout << "The Queue is Empty.\n";
		exit(1);
	}

	else
	{
		num = front->value;		//front of the line
		temp = front;			//subbing front for temp
		front = front->next;	//sending front back one
		delete temp;			//deleting temp making front the new front
		temp = nullptr;			//Wranging dangle
	}
}

template <class T>
bool DynTempQueue<T>::isEmpty() const
{
	if (front == nullptr)
		return true;
	else
		return false;
}

template <class T>
void DynTempQueue<T>::clear()
{
	T value; // dummy variable

	while (!isEmpty())
	{
		dequeue(value);
	}
}
