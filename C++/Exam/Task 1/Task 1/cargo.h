#pragma once
#include <iostream>
#include<string>
#include<cmath>


using namespace std;


template<typename T>
class cargo
{
private:
	T code;
	int weight;
	int distance;
public:
	cargo();
	cargo(T,int,int);
	float getCost();
	void reduceDistance(int);
	void IncreaseWeight(int);
	bool operator>(cargo);
	bool operator<(cargo);
	bool operator>=(cargo);
	bool operator<=(cargo);
	bool operator==(cargo);
	string print();
	//friend ostream& operator<<(ostream& out, const cargo&);

};

