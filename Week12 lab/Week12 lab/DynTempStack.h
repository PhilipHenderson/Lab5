#pragma once

template <class T>
class DynTempStack
{
public:
	DynTempStack();
	~DynTempStack() = default;

	T push(T num);
	T pop(T&);

	bool isEmpty() const;



private:
	template <class T>
	class StackNode
	{
		friend class DynTempStack;
		T value; // Value Of Something
		StackNode * next;

		// Constructor
		StackNode(T value1, StackNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	StackNode* top;
};