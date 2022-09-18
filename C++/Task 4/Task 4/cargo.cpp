#include "cargo.h"




template<typename T>
cargo<T>::cargo()
{
	weight = 0;
	code = '0' || 0;
	distance = 0;


}

template<typename T>
cargo<T>::cargo(T code, int weight, int distance)
{

	this->code = code;
	this->distance = distance;
	this->weight = weight;


}

template<typename T>
int cargo<T>::getCost()
{
	return 0, 1 * weight * distance;
}

template<typename T>
void cargo<T>::reduceDistance(int decr)
{
	distance = distance >= decr ? distance - decr : 0;
}

template<typename T>
void cargo<T>::IncreaseWeight(int Incr)
{
	weight += Incr;
}

template<typename T>
bool cargo<T>::operator>(cargo A)
{
	return getCost() > A.getCost();
}

template<typename T>
bool cargo<T>::operator<(cargo A)
{
	return getCost() < A.getCost();
}

template<typename T>
bool cargo<T>::operator>=(cargo A)
{
	return getCost() >= A.getCost();
}

template<typename T>
bool cargo<T>::operator<=(cargo A)
{
	return getCost() <= A.getCost();
}

template<typename T>
bool cargo<T>::operator==(cargo A)
{
	return getCost() == A.getCost();
}

template<typename T>
int cargo<T>::getWeight()
{
	return weight;
}

template<typename T>
int cargo<T>::getDistance()
{
	return distance;
}
template<typename T>
string cargo<T>::print() {
	return "cargo #" + code + " weight: " + to_string(weight) + "kg, ditance: " + to_string(distance) + "km, cost: " + to_string(getCost()) + "$\n";
}

template<typename T>
T cargo<T>::getCode()
{
	return code;
}



template class cargo<string>;


