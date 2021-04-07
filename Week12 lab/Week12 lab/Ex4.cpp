#include <iostream>
#include <cstdlib>
#include "DynTempQueue.h"
using namespace std;

int main()
{
	DynTempQueue<int> iQueue;
	//DynTempQueue<double> dQueue;

	cout << "Enqueue 5 items...\n";

	for (int i = 1; i <= 15; i++)
	{
		iQueue.enqueue(i * i);
		cout << "int: " << i << endl;
	}

	cout << "Dequeued Values Were:\n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}


	//for (double i = 1; i <= 30; i = (i * 1.25))
	//{
	//	cout << "int Enqueue: " << i << endl;
	//	dQueue.enqueue(i + i);
	//}
	//while (!dQueue.isEmpty())
	//{
	//	int value;
	//	iQueue.dequeue(value);
	//	cout << value << " ";
	//}


	return 0;
}