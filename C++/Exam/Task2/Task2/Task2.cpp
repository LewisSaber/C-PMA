
#include <iostream>
#include "cargo.h"
int main()
{
	cargo<int> A(2, 20, 30);
	cout << A.getCost();
}


