
#include <iostream>
#include <string>
#include "Ball.h"
using namespace std;

int main()
{
    Ball def;
    def.print();

    Ball black("black");
    black.print();

    Ball thirty(30.0);
    thirty.print();

    Ball blackThirty("black", 30.0);
    blackThirty.print();
}
