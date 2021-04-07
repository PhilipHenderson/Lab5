#include <iostream>
#include <cstdlib>
#include "DynTempStack.h"
using namespace std;

//int main()
//{
//
//
//	DynTempStack<int> intStack;
//	DynTempStack<double> doubleStack;
//
//	int catchInt; // this will "catch the value that is popped off
//	double catchDouble; 
//
//	// Int Push
//	for (int i = 1; i <= 30; i = i + 2)
//	{
//		cout << "int Push: " << i << endl;
//		intStack.push(i);
//
//	}
//	cout << endl;
//
//	// Int Pop
//	for (int i = 1; i <= 10; i++)
//	{
//		intStack.pop(catchInt);
//		cout << "int Pop: " << catchInt << endl;
//	}
//
//	// Double Push
//	for (double i = 1; i <= 30; i = i + 1.25)
//	{
//		cout << "double Pop: " << i << endl;
//		doubleStack.push(i);
//	}
//	cout << endl;
//
//
//	cout << "Do you make it here - 1" << endl;
//	// Double Pop
//	for (int i = 1; i <= 30; i++)
//	{
//		doubleStack.pop(catchDouble);
//		cout << "Popping Double Stack: " << catchDouble << endl;
//	}
//	cout << "Do you make it here - 2" << endl;
//
//
//	return 0;
//}