
#include "myArray.h"
#include "shapes.h"
template <typename T>
myArray<T>::myArray()
{
	length = 0;
	data = nullptr;
}
template <typename T>
myArray<T>::myArray(int Length)
{
	if (Length > 0){
	length = Length;
	data = new T*[length];
	} else {
		length = 0;
		data = nullptr;
	}
}
template <typename T>
myArray<T>::~myArray()
{
    delete[] data;   
}
template <typename T>
void myArray<T>::erase()
{
    delete[] data;
    data = nullptr;
    length = 0;
}
template <typename T>
T& myArray<T>::operator[](int i)
{
	if(i >= 0 && i<length )
	return data[i];
}
template <typename T>
int myArray<T>::getLength() { return length; }

template <typename T>
void myArray<T>::insert(T value, int i)
{
	if (length > 0)
	{
		T* Data = new T[length + 1];

		for (int before = 0; before < i; before++)
		{
			Data[before] = data[before];
		}

		Data[i] = value;
		for (int after = i; after < length; after++)
		{
			Data[after + 1] = data[after];

		}

		delete[] data;
		data = Data;
		length++;
	}
}

template <typename T>
void myArray<T>::remove(int i)
{
	if (length >= 1)
	{
		T* Data = new T[length - 1];

		for (int before = 0; before < i; before++)
			Data[before] = data[before];

		for (int after = i + 1; after < length; after++)
			Data[after - 1] = data[after];


		delete[] data;
		data = Data;
		length--;
	}
}



template class myArray<int>;
template class myArray<double>;
template class myArray<string>;
template class myArray<shapes>;















/*
#include "myArray.h"

myArray::myArray()
{
	length = 0;
	data = nullptr;
}

myArray::myArray(int Length)
{
	if (Length > 0) {
		length = Length;
		data = new int[length];
	}
	else {
		length = 0;
		data = nullptr;
	}
}

myArray::~myArray()
{
	delete[] data;
}

void myArray::erase()
{
	delete[] data;
	data = nullptr;
	length = 0;
}

int& myArray::operator[](int i)
{
	if (i >= 0 && i < length)
		return data[i];
}

int myArray::getLength() { return length; }

void myArray::insert(int value, int i)
{
    if (length > 0)
    {
        int* Data = new int[length + 1];

		for (int before = 0; before < i; before++)
		{
			cout << "Debug: " << before << " " << data[before] << endl;
			Data[before] = data[before];
		}

        Data[i] = value;
		for (int after = i; after < length; after++)
		{
			Data[after + 1] = data[after];
			
		}

        delete[] data;
        data = Data;
        length++;
    }
}

void myArray::remove(int i)
{
    if (length >= 1)
    {
        int* Data = new int[length - 1];

        for (int before = 0; before < i; before++)
            Data[before] = data[before];

        for (int after = i + 1; after < length; after++)
            Data[after - 1] = data[after];


        delete[] data;
        data = Data;
       length--;
    }
}
*/
