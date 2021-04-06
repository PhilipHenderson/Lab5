#include <iostream>
#include "DynTempStack.h"
using namespace std;

int main()
{

	//int intStack;
	double doubleStack;
	DynTempStack<int> intStack;

	//int catchInt; // this will "catch the value that is popped off
	//double catchDouble; 

	for (int i = 5; i <= 15; i = i + 5)
	{
		cout << "int Push: " << i << endl;
		intStack.push(i);
		//cout << "double Push: " << i << endl;
		//doubleStack.push(i);
	}
	cout << endl;

	//for (int i = 1; i <= 3; i++)
	//{
	//	cout << "Pop: ";
	//	intStack.pop(catchInt);
	//	//doubleStack.pop(catchDouble);
	//	cout << catchInt << endl;
	//	//cout << catchDouble << endl;
	//}

	//cout << "\nAttempting to pop again...";
	//intStack.pop(catchInt);
	////doubleStack.pop(catchDouble);

	return 0;
}