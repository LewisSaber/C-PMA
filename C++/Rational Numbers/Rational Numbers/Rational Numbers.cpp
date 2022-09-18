#include "Rational.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
void inputFromFile(Rational*& N, string file)
{
	ifstream fin(file);
	int i = 0;
	string n;
	double a = 1;
	double b = 1;
	int num = 1;
	fin >> n;
	fin >> n;

	while (n != "end")
	{
		
		if (n == ";") {
			num = 1;
			N[i].Set_Number(a, b);
			i++;
			a = 1;
			b = 1;
			
		}
		else
			if (num == 1)
			{
				a = stod(n);
				num = 2;
			}
			else
				if (num == 2)
				{
					b = stod(n);
						num = 1;
				}
		fin >> n;
	}

}
double AverageBiggerThenX(Rational* N, int n, double x)
{
	double Average = 0;
	int amount = 0;
	for (int i = 0; i < n; i++)
	{
		if (N[i] > x)
		{
			Average = N[i].Get_Number() + Average;
			
			amount++;
			
		}
		

	}
	return Average / amount;


}
int main()
{
	string file = "Data.txt";
	ifstream fin(file);
	int n;
	fin >> n;
	Rational A();
	
	Rational* Numbers = new Rational[n];
	inputFromFile(Numbers, file);
	for (int i = 0; i < n; i++)
	{
		Numbers[i].Print();
		cout << " , " << Numbers[i].Get_Number() << endl;
	}
	double k = Numbers[1].Get_Number();
	cout << "Average of numbers bigger then " << k << ": " << AverageBiggerThenX(Numbers, n, k)<<endl;
	double product = 1;
	int identical = 0;
	Rational max = Numbers[0];
	Rational min = Numbers[0];

	for(int i = 0; i < n; i++)
     {
		if (Numbers[i] < k) product *= Numbers[i].Get_Number();
		if (Numbers[i] == k) identical++;
		if (Numbers[i] > max) max = Numbers[i];
		if (Numbers[i] < min) min = Numbers[i];
		
	}
	cout << "Product of numbers less then " << k << " : " << product<<endl;
	cout << "Amount of numbers same as " << k << " : " << identical<<endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	//cout << "Min + Max: " << (min + max) << endl;
		

	

	
}


