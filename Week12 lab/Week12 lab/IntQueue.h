#pragma once

class IntQueue
{
public:
	IntQueue(int);
	~IntQueue() {delete[] queueArray;}
	void enqueue(int);
	void dequeue(int&);
	bool isEmpty() const;
	bool isFull() const;
	void clear();
private:
	int* queueArray; // Array
	int queueSize;	//Capacity of the queue
	int front;		//Where the front is
	int rear;		//Where the rear is
	int numItems;	// Number of Items in the queue
};