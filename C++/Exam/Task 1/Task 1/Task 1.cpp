
#include <iostream>
#include "cargo.h"
int main()
{
    cargo<int> A(2, 20, 20);
    cargo<int> B(3, 4, 10);
    cout << A.getCost()<<endl;
    A.IncreaseWeight(20);
    cout << A.print();
}

