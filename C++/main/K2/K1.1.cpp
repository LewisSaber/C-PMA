#include "complex.h"
#include <iostream>





int main()
{
	srand(time(NULL));

	int n = 10;
	complex* A = new complex[n];
	for (int i = 0; i < n; i++)
	{
		A[i].Random(10);
		cout <<i <<": " << A[i] << '\n';
	}
	cout << endl;
	cout << A[0] << " + "<< A[4] << " = " << A[0] + A[4] << endl << endl;
	cout << A[2] << " - " << A[7] << " = " << A[2] - A[7] << endl<<endl;
	cout << A[4] << " * " << A[2] << " = " << A[4] * A[2] << endl << endl;
	cout << A[6] << " / " << A[0] << " = " << A[6] / A[0] << endl << endl;
	
}

