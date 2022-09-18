

#include <iostream>
using namespace std;
int main()
{
	bool repeat = 1;
	int n,min_i=0,max_i=0;
	double min, max, sum = 0, dob = 1;

	double A[100];

	while (repeat)
	{
		cout << "Number of numbers:";
		cin >> n;
		cout << "Enter numbers : ";
		cin >> A[0];
		min = max = A[0];
		if (A[0] < 0)
		{
			sum += A[0];
		}

		for (int i = 1; i < n; i++)
		{
			cin >> A[i];
			if (A[i] < 0)
			{
				sum += A[i];
			}
			if (A[i] > max)
			{
				max = A[i];
				max_i = i;
			}
			if (A[i] < min)
			{
				min = A[i];
				min_i = i;
		    }
		}
		if (max_i < min_i)
		{
			max_i += min_i;
			min_i = max_i - min_i;
			max_i -= min_i;
		}
		
		min_i++;


		for (min_i; min_i  < max_i; min_i++)
			dob = dob * A[min_i];
		cout << "Sum of a<0 : " << sum << endl;
		cout << "Min : " << min << endl;
		cout << "Max : " << max << endl;
		cout << "Product of numbers between max and min :" << dob << endl;
		sum = 0;
		dob = 1;
		min_i = 0;
		max_i = 0;
		cout << "Press 1 to repeat program, 0 to stop : ";
		cin >> repeat;
	}
	return 0;
}

