

#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int** A;
	int** B;
	int n, k;
	cout << "Enter matrix side : ";
		cin >> n;
		cout << "Enter rotate times : ";
		cin >> k;

	A = new int* [n];
	B = new int* [n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
		B[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	if (n % 2 == 1)
		B[n / 2][n / 2] = A[n / 2][n / 2];
	for (int l = 0; l < k; l++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (l % 2 == 0)
				{
					if (j >= i && j < n - 1 - i)
						B[i][j + 1] = A[i][j];

					if (j > i && j >= n - 1 - i)
						B[i + 1][j] = A[i][j];
					if (j <= i && j > n - 1 - i)
						B[i][j - 1] = A[i][j];
					if (j < i && j <= n - 1 - i)
						B[i - 1][j] = A[i][j];
				}
				if (l % 2 == 1)
				{

					if (j >= i && j < n - 1 - i)
						A[i][j + 1] = B[i][j];

					if (j > i && j >= n - 1 - i)
						A[i + 1][j] = B[i][j];
					if (j <= i && j > n - 1 - i)
						A[i][j - 1] = B[i][j];
					if (j < i && j <= n - 1 - i)
						A[i - 1][j] = B[i][j];
				}

			}
		}
	}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (k % 2 == 1)
					cout << B[i][j] << " ";
				else
					cout << A[i][j] << " ";
			}
			cout << endl;
		}



}
