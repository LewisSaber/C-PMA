

#include <iostream>
using namespace std;
int main()
{
	int n = 1,i=0,n1,n2 = 0,n3 = 0;//n - current number, i - current step, n1 - number of numbers, n2  - # of 0, n3 - to stop searching 0;
	int i1 = 0;
	bool repeat = 1;
	while(repeat)
	{
		


		cout << "number of numbers : ";
		cin >> n1;

 		cout << "Enter numbers: " ;
		while (i<n1)
		{
			
			cin >> n;
			i++;
			if (n == 0 && n3 == 0)
			{
				n2 = i;
				n3 = 1;
			}
			
		

		}
		if (n2 == 0)
			cout << "0 not found" << endl;
		else


		cout << "# of 0 element : " << n2 << endl;
		i = 0;
		n = 1;
		n1 = 0;
		i1 = 1;
		n3 = 0;
		n2 = 0;
	
		cout << "enter 1 to continue, 0 to stop : " << endl;

		cin >> repeat;

		
	} 
	
	return 0;

}

