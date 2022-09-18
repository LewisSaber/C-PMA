
#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	
	int length,height,k=0,n=0,max = -1;
	bool repeat = 1;

	while (repeat)
	{
		int** A;
	cout << "Enter matrix length : ";
	cin >> length;
	cout << "Enter matrix height : ";
	cin >> height;
	
	A = new int* [height];
	for (int i = 0; i < height; i++)
	{
		A[i] = new int[length];
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			A[i][j] = rand() % 10;
			cout << A[i][j] << " ";
			if (A[i][j] == 0)
				k = 1;

		}
		if (k == 1)
			k = 0;
		else
			n++;
		cout << endl;
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			for (int a = 0; a < height; a++)
			{
				for (int b = 0; b < length; b++)
				{
					if (A[i][j] == A[a][b] && A[i][j] > max )
						if (a == i && b == j)
						{
						}
						else
						{
							

							max = A[i][j];
						}
				}
			}
		}
	}
	cout << endl;
	cout << "number of lines without 0 : " << n << endl << endl;
	if (max == -1)
		cout << "No number repeat";
	else
		cout << "Max of repeatable numbers : " << max << endl;

	k = 0;
	n = 0;
	max = -1;
	cout << "Press 1 to repeat program, 0 to stop : ";
	cin >> repeat;
	}
	return 0;
}

