

#include <iostream>
#include <fstream>
#include "Items.h"
#include <string>
void EnterFromConsole(Items* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		Items item;
		item.Input();
		a[i] = item;
	}
}
void EnterFromFile(string file, Items* a)
{
	int n;
	double cost;
	string name;
	ifstream fin(file);
	fin >> n;
	for (int i = 0; i < n; i++)
	{
		fin >> name;
		fin >> cost;
		a[i].SetName(name);
		a[i].SetCost(cost);

	}
}
int FindBiggest(Items* a, int n)
{
	double max = a[0].GetCost();
	int max_i = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i].GetCost() > max)
		{
			max_i = i;
			max = a[i].GetCost();
		}
	}
	return max_i;

}
void myswap(Items &a, Items &b)
{
	Items temp(a);
	a.CopyFrom(b);
	b.CopyFrom(temp);

}
void SortAlphabet(Items* a, int n)
{
	string min;
	int minj;
	for (int i = 0; i < n; i++)
	{
		min = a[i].GetName();
		minj = i;
		for (int j = i; j < n; j++)
		{
			if (min >= a[j].GetName())
			{
				min = a[j].GetName();
				minj = j;
			}
		}
		myswap(a[i], a[minj]);
		
	}
	//myswap(a[n - 1], a[n - 2]);

}
void print(Items* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i].print();

	}
}




int main()
{
	string file = "Data.txt";
		ifstream fin(file);
	int n;
	fin >> n;
	fin.close();
	
	Items* a = new Items[n];
	EnterFromFile(file, a);
	print(a,n);
	int max_i = FindBiggest(a, n);
	cout << "The most expancive item : " << endl;
	a[max_i].print();
	cout << "After sorting" << endl;
	SortAlphabet(a, n);
	print(a,n);
}

