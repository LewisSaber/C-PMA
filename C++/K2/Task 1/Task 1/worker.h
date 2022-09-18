#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;



class worker
{
private:
	string name;
	string status;
	string posada;
	int fullStaj;
	int partialStaj;
	int salary;

public:
	worker();
	worker(string,string,string,int,int,int);
	void print();
	string getName();
	int getFullStaj();
	bool operator < (const worker);
	void rankUp();
	string stringjufy();



};

