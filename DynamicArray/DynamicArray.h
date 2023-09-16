#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; 
	int size;   
	int inputSize;
	int searcheble;
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); 
	~DynamicArray();
	void Input();
	void Output();
	int * GetPointer();
	int GetSize();
	void ReSize(int size);
	void Sort(int *a , int n);
	int Search(int i);



};

