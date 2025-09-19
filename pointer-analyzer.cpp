#include<iostream>

using namespace std;

// Function prototype
void analyze_pointer(int* ptr);

int main()
{
	// int on the stack
	int stackInt = 21;
	analyze_pointer(&stackInt);

	// int on the heap
	int* heapIntPtr = new int(617);
	analyze_pointer(heapIntPtr);

	return 0;
}

// Definition
void analyze_pointer(int* ptr)
{
	cout << "Memory Address: " << ptr << endl;
	cout << "Integer Value:" << *ptr << endl << endl;
}

