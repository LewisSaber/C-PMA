
#include <iostream>
using namespace std;

template <class T>
void printall(T* data, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
template<class T>
void fillRandom(T* data, int length, int max)
{
	srand(time(NULL));
	for (int i = 0; i < length; i++)
	{
		data[i] = -1 * max + ((rand() % (max * 20 + 1) + 1.0) / 10);
	}

}

template<class T>
T findLastNegative(T* A,int l){
	for (int i = l - 1; i >= 0; i--)
	{
		if (A[i] < 0) return A[i];
	}
	return 0;
}
template<class T>
void doTask(T* A, int l) {
	T neg = findLastNegative(A, l) / 2;
	for (int i = 0; i < l; i++)
	{
		A[i] += neg;
	}
}


int main()
{
	int m = 12;
	int* B = new int[m];
	fillRandom(B, m, 30);
	cout << "Array of int" << endl;
	printall(B, m);
	cout << endl << "Last Negative / 2 : " << findLastNegative(B, m) / 2 ;
	doTask(B, m);
	cout << endl  << "Array after task: " << endl;
	printall(B, m);
	cout << endl;




	int n = 10;
	double* A = new double[n];
	fillRandom(A, n,10);
	cout << "Array of double" << endl;
	printall(A, n);
	cout << endl << "Last Negative / 2 : " << findLastNegative(A, n) / 2 ;
	doTask(A, n);
	cout << endl << "Array after task: " << endl;
	printall(A, n);
}

