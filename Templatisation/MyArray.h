#pragma once
#include <iostream>

using namespace std;

template<typename T>
class MyArray
{
private:
	unsigned int size;
	T* myArray;
	unsigned int count = 0;
public:
	MyArray();
	MyArray(const unsigned int size);

	~MyArray();

	int getSize() { return this->size; }
	const int* getMyArray() { return this->myArray; }

	T& operator[](const unsigned int& i);

	void addItem(const T& val);
	void Fill(const T& val);
};

