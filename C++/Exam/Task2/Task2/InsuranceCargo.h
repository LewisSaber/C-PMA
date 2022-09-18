#pragma once
#include "cargo.h"
template <typename T>
class InsuranceCargo : public cargo<T>
{
private : 
	using cargo<T>::weight;
	using cargo<T>::code;
	using cargo<T>::distance;
	float insuranceCost;
public:
	InsuranceCargo();
	InsuranceCargo(T, int, int, int);
	float getCost();
	string print();

};

