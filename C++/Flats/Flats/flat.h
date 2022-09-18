#pragma once
#include<string>
#include <iostream>
#include <fstream>

using namespace std;
template<class T>
class flat
{
protected:
	T rooms;
public:
	virtual T getRooms() = 0;
	virtual string Print() = 0;
};

