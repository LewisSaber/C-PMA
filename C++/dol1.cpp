
#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));

	int** A;
	int l, h,k1,k2,n = 0,num;
	float aver = 0 ;
	bool search = 1;
	cout << "Enter length: ";
	cin >> l;
	cout << "Enter height: ";
	cin >> h;
	cout << "Number average should be lover then : ";
		cin >> num;

	A = new int* [h];
	for (int i = 0; i < h; i++)
	{
		A[i] = new int[l];
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
		cin >> A[i][j];
			//A[i][j] = rand() % 10;
		//cout << A[i][j] << " ";
		aver += A[i][j];
		}
		aver = aver / l;
		if (aver < num)
			n++;
		aver = 0;

		//cout << endl;
	}
	cout << endl;
	cout << endl;
	if (A[0][0] == 0)
	{
		int temp;
		for (int i = 0; i < l; i++)
		{
			temp = A[0][i];
			if (A[1][0] != 0)
			{
				A[0][i] = A[1][i];
				A[1][i] = temp;
			}
			else
			{
				A[0][i] = A[2][i];
				A[2][i] = temp;
			}
	}
	}
    for (int t = 0; t < h; t++)
     {
		for (int i = t+1; i < h; i++)
		{
			int nsd;
			if (abs(A[i][t]) < abs(A[t][t]))
				nsd = abs(A[i][t]);
			else
				nsd = A[t][t];
			while (search && nsd > 0)
			{
				if (A[i][t] % nsd == 0 && A[t][t] % nsd == 0)
				{
					search = 0;
				}
				nsd--;
			}
			nsd++;
			search = 1;
		
			if (nsd <= 1)
			{
			
				k1 = A[i][t];
				k2 = A[t][t];
			}
			else
			{
				k1 = A[i][t] / nsd;
				k2 = A[t][t] / nsd;
			}
			for (int j = 0; j < l; j++)
			{
				A[i][j] = (A[t][j] * k1 - A[i][j] * k2);
			}			
		}
      }
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Number of rows with average lover then " << num << " : " << n << endl;
	n = 0;
	
	return 0;
}

