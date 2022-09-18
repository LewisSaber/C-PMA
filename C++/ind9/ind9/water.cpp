#include "water.h"

water::water(string S,int P,int pv, int p)
{
	surname = S;
	pokaznik = P;
	paidV = pv;
	paid = p;
}

void water::print()
{
	cout << "Surname: " << surname << ", Pokaznik: " << pokaznik;
}
