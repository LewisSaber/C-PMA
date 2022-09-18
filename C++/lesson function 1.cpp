
#include <iostream>
#include <fstream>

using namespace std;


double f(double a, double b, double c)
{
    double result;
    result = (2 * a - b - sin(c)) / (5 + abs(c));
    return result;

}

int main()
{
   ifstream fin("Data.txt");
  
    int t, s;
   
    fin >> t;
    fin >> s;
   
    cout << f(t, -2 * s, 1.17) + f(2.2, t, s - t);
    fin.close();
    return 0;

}



