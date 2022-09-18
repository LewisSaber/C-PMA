#include <iostream>
using namespace std;
int main()
{
	
	bool repeat = 1;
	int A[100];
	int i = 0 , n;
	while (repeat)
	{
		cout << "Number of numbers:";
		cin >> n;
		cout << "Enter numbers : ";
		while (i < n)
		{
			cin >> A[i];
			if (i % 2 == 0)
			{
				A[i] = A[i] * (-1);
			}
			if (i % 2 == 1)
			{
				A[i] = A[i] * 2;
			}
			cout << A[i] << " ";
			i++;

		}
		i = 0;
		cout << endl <<"Press 1 to repeat program, 0 to stop : ";
		cin >> repeat;
	}

	return 0;
}