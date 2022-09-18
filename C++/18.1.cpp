#include <iostream>
using namespace std;
int main()
{
	int i,j,sum=0;
	const int n = 6;
	const int m = 8;
	float max,  A[n][m];
	for (i = 0; i < n; i++)
		for (j = 0; i < m; j++)
	{
			cout << "A[" << i << "][" << j << "]="; cin >> A[i][j];
	}
	max = A[0][0];
	for (i = 0; i < n; i++)
		for (j = 0; i < m; j++)
			if (A[i][j] > max) max = A[i][j];

	
	cout << "Max : " << max << endl;
	return 0;
}
