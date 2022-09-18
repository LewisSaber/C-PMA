#include "matrix.h"

template<class T>
matrix<T>::matrix()
{
	row = col = 0;
}

template<class T>
matrix<T>::matrix(int a)
{
	row = 1;
	col = a;
	data.resize(row);
	for (int i = 0; i < row; i++) {
		data[i].resize(col);
	}
}

template<class T>
matrix<T>::matrix(int a, int b)
{
	row = a;
	col = b;
	data.resize(row);
	for (int i = 0; i < row; i++) {
		data[i].resize(col);
	}
}

template<class T>
matrix<T>::matrix(const matrix& B)
{
	row = B.row;
	col = B.col;
	data.resize(row);
	for (int i = 0; i < row; i++)
	{
		data[i].resize(col);
		
		for (int j = 0; j < col; j++)
		{
			data[i][j] = B.data[i][j];
		}
	}
}

template<class T>
void matrix<T>::fillrandom(int max)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			data[i][j] = max - (rand() % (max * 20) + 1.0) / 10;

		}
	}
}

template<class T>
void matrix<T>::print()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << data[i][j] << '\t';
		}
		cout << '\n';
	}
}

template<class T>
int matrix<T>::getRows()
{
	return row;
}

template<class T>
int matrix<T>::getCols()
{
	return col;
}

template<class T>
vector<T>& matrix<T>::operator[](int i)
{
	if (i >= 0 && i < row)
	return data[i];
}

template<class T>
matrix<T> matrix<T>::operator+(const matrix& B)
{
	if (row == B.row && col == B.col)
	{
		matrix<T> C(row, col);
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++)
			{
				C.data[i][j] = data[i][j] + B.data[i][j];	
			}
			
		}

		return C;
	}
}

template<class T>
void matrix<T>::operator=(const matrix B)
{
	
	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			data[i][j] = B.data[i][j];
			
		}
	}
	
}

template<class T>
vector<vector<T>> matrix<T>::getData()
{
	return data;
}


template class matrix<int>;
template class matrix<double>;
