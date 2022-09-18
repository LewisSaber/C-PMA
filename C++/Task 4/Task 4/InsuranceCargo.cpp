#include "InsuranceCargo.h"


template<typename T>
InsuranceCargo<T>::InsuranceCargo() :cargo()
{

	insuranceCost = 0;
}

template<typename T>
InsuranceCargo<T>::InsuranceCargo(T code, int weigt, int distance, int insuranceCost) :cargo(code, weight, distance)
{

	this->insuranceCost = insuranceCost;

}



template<typename T>
float InsuranceCargo<T>::getCost()
{
	return 0, 1 * weight * distance + insuranceCost * 0.05;
}
template<typename T>
string InsuranceCargo<T>::print() {
	return "cargo #" + code + " weight: " + to_string(weight) + "kg, ditance: " + to_string(distance) + "km, Insurance Cost: " + to_string(insuranceCost) + "$, cost: " + to_string(getCost()) + "$\n";
}

template class cargo<string>;
