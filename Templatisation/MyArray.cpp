#pragma once
#include <iostream>
#include "MyArray.h"

using namespace std;

template<typename T>
MyArray<T>::MyArray() : MyArray(10)
{
}

template<typename T>
MyArray<T>::MyArray(const unsigned int size)
	: size(size)
{
	this->myArray = new T[this->size];
#ifdef _DEBUG
	cout << "MyArray<" << typeid(T).name() << ">( " << this->size << ") " << this << ", myArray: " << this->myArray << endl;
#endif
}

template<typename T>
MyArray<T>::~MyArray()
{
	delete[] myArray;
	myArray = nullptr;
#ifdef _DEBUG
	cout << "Destruction MyArray " << this << " Size:" << this->size << endl;
#endif
}

template<typename T>
void MyArray<T>::Fill(const T& val)
{
	for (unsigned int i = 0; i < this->size; i++)
	{
		(this->myArray)[i] = val;
		this->count++;
	}
}

template<typename T>
T& MyArray<T>::operator[](const unsigned int& i)
{
	if (i < this->size)
	{
		return (this->myArray)[i];
	}
}

template<typename T>
void MyArray<T>::addItem(const T& val)
{
	if (this->count < this->size)
	{
		myArray[count++] = val;
	}
	else
	{
		T* tempon = new T[size + 1];
		memcpy(tempon, myArray, sizeof(T) * size);  
		delete[] myArray; 
		size += 1;
		myArray = tempon;
		myArray[count++] = val;
	}
}