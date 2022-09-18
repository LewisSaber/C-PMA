#pragma once
#include <iostream>
#include<string>


using namespace std;


template<typename T>
class cargo
{
protected:
	T code;
	int weight;
	int distance;

public:
	cargo();
	cargo(T, int, int);
	int getCost();
	void reduceDistance(int);
	void IncreaseWeight(int);
	bool operator>(cargo);
	bool operator<(cargo);
	bool operator>=(cargo);
	bool operator<=(cargo);
	bool operator==(cargo);
	int getWeight();
	int getDistance();
	string print();
	T getCode();


};
