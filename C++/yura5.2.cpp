
#include <iostream>
using namespace std;
int main()
{
	
	int side, n,l,h;
	int** A;
	int** B;

		cout << "Enter matrix length : ";
		cin >> l;
		cout << "Enter matrix height : ";
		cin >> h;
		cout << " Enter 0 to slide to right, 1 to slide down : ";
		cin >> side;
		cout << "Enter how many to slide : ";
			cin >> n;
		A = new int* [h];
		B = new int* [h];
		for (int i = 0; i < h; i++)
		{
			A[i] = new int[l];
			B[i] = new int[l];
		}
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < l; j++)
			{
				A[i][j] = rand() % 10;
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		cout << endl;
		if (side == 1)
		{
			n = n % h;
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < l; j++)
				{
					if (i <  n)
						B[i][j] = A[i + (h-n)][j];
					else
						B[i][j] = A[i - n][j];
					cout << B[i][j] << " ";
				}
				cout << endl;
			}
		}
		if (side == 0)
		{
			n = n % l;
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < l; j++)
				{
					if (j <n)
						B[i][j] = A[i][j+ (l-n)];
					else
						B[i][j] = A[i][j - n];
						cout << B[i][j] << " ";
				}
				cout << endl;
			}
		}
		

}

