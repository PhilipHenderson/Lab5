#pragma once

class DynIntQueue
{
public:
	//constructor
	DynIntQueue() { front = nullptr; rear = nullptr; }
	~DynIntQueue() { clear(); }

	void enqueue(int);
	void dequeue(int&);
	bool isEmpty() const;
	void clear();
private:
	class QueueNode
	{
		friend class DynIntQueue;
		int value;
		QueueNode* next;

		//constructor
		QueueNode(int val1, QueueNode* next1 = nullptr)
		{
			value = val1;
			next = next1;
		}
	};

	QueueNode* front;
	QueueNode* rear;
};