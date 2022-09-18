
#include <iostream>
using namespace std;
int main()
{
	int sumunder = 0;
	int A[10][10];
		int B[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			A[i][j] = B[i][j] = rand() % 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0 && j == 0)
				B[i][j] = (A[i][j + 1] + A[i + 1][j]) / 2;

			if (i == 0 && j == 9)
					B[i][j] = (A[i][j - 1] + A[i + 1][j]) / 2;	

			if (i == 9 && j == 0)
					B[i][j] = (A[i - 1][j] + A[i][j + 1]) / 2;
					
			if (i == 9 && j == 9)
					B[i][j] = (A[i][j - 1] + A[i - 1][j]) / 2;

			if (i == 0 && j != 0 && j != 9)
				B[i][j] = (A[i + 1][j] + A[i][j - 1] + A[i][j + 1]) / 3;

			if (i == 9 && j != 0 && j != 9)
				B[i][j] = (A[i - 1][j] + A[i][j - 1] + A[i][j + 1]) / 3;

			if (j == 0 && i != 0 && i != 9)
				B[i][j] = (A[i][j + 1] + A[i - 1][j] + A[i + 1][j])/3;
				if (j == 9 && (i != 0 && j != 0))
					B[i][j] = (A[i][j - 1] + A[i - 1][j] + A[i + 1][j])/3;
			if (j != 0 && j != 9 && i != 0 && i != 9)
				B[i][j] = (A[i - 1][j] + A[i + 1][j] + A[i][j + 1] + A[i][j - 1]) / 4;
			cout << B[i][j] << " ";

		}

		cout << endl;
	}
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
			sumunder += B[i][j];
	}
	cout << endl;
	cout << endl;
	cout << "Sum of nubers under main diagonal : " << sumunder << endl;
}
