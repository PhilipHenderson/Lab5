#include <iostream>
#include <cstdlib>
#include "DynTempQueue.h"
using namespace std;

int main()
{
	DynTempQueue<int> iQueue;
	DynTempQueue<double> dQueue;

	cout << "Enqueue up to 15 Ints...\n";

	for (int i = 1; i <= 15; i++)
	{
		iQueue.enqueue(i);
		cout << i << " ";
	}
	cout << endl;
	cout << "Dequeued Int Values Were:\n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}
	cout << endl;
	cout << endl;


	cout << "Enqueue  up tp 15 Doubles...\n";
	for (double i = 1; i <= 15; i = (i * 1.25))
	{
		dQueue.enqueue(i);
		cout << i << " ";
	}
	cout << endl;
	cout << "Dequeued Double Values Were:\n";
	while (!dQueue.isEmpty())
	{
		double value;
		dQueue.dequeue(value);
		cout << value << " ";
	}
	cout << endl << endl;

	return 0;
}