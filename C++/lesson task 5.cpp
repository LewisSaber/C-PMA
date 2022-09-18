

#include <iostream>
using namespace std;
int main()
{

	int min, max, min_i, min_j, max_i, max_j;
	min_i = min_j = max_i = max_j = 0;
	int** A;
	int n;
	cout << "enter n : ";
	cin >> n;
	A = new int* [n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			if (i == 0 && j == 0)
				min = max = A[0][0];
			if (A[i][j] < min)
			{
				min = A[i][j];
				min_i = i;
				min_j = j;
			}
			if (A[i][j] >= max)
			{
				max = A[i][j];
				max_i = i;
				max_j = j;
			}
			cout << A[i][j] << " ";

		}
		cout << endl;
	
	}
	cout << "max : " << max << "[" << max_i << "][" << max_j << "]" << endl;
	cout << "min : " << min << "[" << min_i << "][" << min_j << "]" << endl;
	A[max_i][max_j] = min;
	A[min_i][min_j] = max;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	return 0;

}

