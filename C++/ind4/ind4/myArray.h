

#pragma once
#include <iostream>
#include <string>

using namespace std;

template <class T>
class myArray
{
private:

    int length;
    T** data;
   
public:
    myArray();
    myArray(int);
    ~myArray();
    void erase();
    //T& operator[](int);
    T& operator[](int);
    int getLength();
    void remove(int);
    void insert(T, int);

};




/*
class myArray
{
private:

    int length; 
    int* data;
public:
    myArray();
    myArray(int);
    ~myArray();
    void erase();
    int& operator[](int);
    int getLength();
};
*/


