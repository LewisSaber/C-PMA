
#include <iostream>

using namespace std;


template <typename T>
void quickSort(T* a, long N) {

	long i = 0, j = N;
	T temp, p;

	p = a[N >> 1];

	do {
		while (a[i] < p)  i++;
		while (a[j] > p)  j--;

		if (i <= j) {

			temp = a[i]; a[i] = a[j]; a[j] = temp;

			i++; j--;
		}
	} while (i <= j);


	if (j > 0) quickSort(a, j);
	if (N > i) quickSort(a + i, N - i);
}

template<class T>
void fillRandom(T* data,int length,int max)
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
	int n = 10;
	int m = 12;
	int* A = new int[n];
	double* B = new double[m];
	fillRandom(A, n,100); fillRandom(B, m,100);


	//int
	cout << endl << " Array before sorting: " << endl << endl << " ";
	printall(A, n);
	quickSort(A, n-1);
	cout << endl << " Array after sorting: " << endl << endl << " ";
	printall(A, n);


	//double
	cout << endl << " Array before sorting: " << endl << endl << " ";
	printall(B, m);
	quickSort(B, m - 1);
	cout << endl << " Array after sorting: " << endl << endl << " ";
	printall(B, m);

}
