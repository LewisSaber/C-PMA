// K2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
struct student {
	string surname;
	string IP;//I - імя P - по-батькові
	int group;
	int G[5];
};
void EnterFromFile(student* a,int n, string file)
{
	ifstream fin(file);
	for (int i = 0; i < n; i++)
	{
		fin >> a[i].surname;
		fin >> a[i].IP;
		fin >> a[i].group;
		for (int j = 0; j < 5; j++)
		{
			fin >> a[i].G[j];
		}

	}


}
void print(student a)
{
	cout << a.surname << " " << a.IP << "      " << a.group << "    ";
	for (int i = 0; i < 5; i++)
		cout << a.G[i] << " ";
	cout << endl;


}
int AverageGrade(student a)
{
	double aver = 0;
	for (int i = 0; i < 5; i++)
	{
		aver += a.G[i];
	}
	aver = aver / 5;
	return aver;
}
int main()
{
	int n = 5;
	int stnum = 0;//кількість студентів з балом >4
	double aver;
	student* a = new student[n];
	EnterFromFile(a, n, "Data.txt");
	cout << "Name  Initials  Group    Grades" << endl;
	for (int i = 0; i < n; i++)
	{
		print(a[i]);
			
	}
	cout << "Students with best grades >= 4" << endl;
	cout << "Name  Initials  Group    Grades" << endl;
	for (int i = 0; i < n; i++)
	{
		aver = AverageGrade(a[i]);
		if (aver >= 4)
		{
			stnum++;

			print(a[i]);
		}
	}
	if (stnum == 0)
		cout << "No studens have average grade >= 4";
  
}

