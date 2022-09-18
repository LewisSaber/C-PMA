
#include <iostream>
using namespace std;
template<class T>
void shuffle(T* a, int length)
{
	//Перемішати
	for (int i = 0; i < length; i++)
		swap(a[i], a[rand() % length]);
}

template<class T>
bool isSorted(T* a, int length)
{
	//Перевірити чи посортовано
	for (int i = 0; i < length - 1; i++)
	{
		if (a[i] > a[i + 1])
			return false;
	}
	return true;
}
template<class T>
void bogosort(T* a, int length)
{
	//Перемішувати поки масив не посортовано
	while (!isSorted(a, length))
		shuffle(a, length);
}
template<class T>
void fillRandom(T* data, int length, int max)
{
	srand(time(NULL));
	for (int i = 0; i < length; i++)
	{
		data[i] = (rand() % (max * 10) + 1.0) / 10;
	}

}
template<class T>
void printall(T* data, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}



int main()
{
	int n = 5;
	int m = 6;
	int* A = new int[n];
	double* B = new double[m];
	fillRandom(A, n, 100); fillRandom(B, m, 100);


	//int
	cout << endl << " Array before sorting: " << endl << endl << " ";
	printall(A, n);
	bogosort(A, n - 1);
	cout << endl << " Array after sorting: " << endl << endl << " ";
	printall(A, n);


	//double
	cout << endl << " Array before sorting: " << endl << endl << " ";
	printall(B, m);
	bogosort(B, m - 1);
	cout << endl << " Array after sorting: " << endl << endl << " ";
	printall(B, m);
}
