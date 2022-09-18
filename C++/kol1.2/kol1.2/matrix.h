#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

template <class T>

class matrix
{
private:
	int row;
	int col;
	vector<vector<T>> data;
public:
	matrix();
	matrix(int);
	matrix(int, int);
	matrix(const matrix&);
	void fillrandom(int);
	void print();
	int getRows();
	int getCols();
	vector<T>& operator[](int);
	matrix<T> operator+(const matrix&);
	void operator=(const matrix );
	vector<vector<T>> getData();


};


