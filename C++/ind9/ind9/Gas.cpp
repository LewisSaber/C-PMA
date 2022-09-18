#include "Gas.h"

Gas::Gas(string S, int P, int p)
{
	surname = S;
	persons = P;
	paid = p;

}

void Gas::print()
{
	cout << "Surname: " << surname << ", person: " << persons << ", How many paid: " << paid << endl;
}
