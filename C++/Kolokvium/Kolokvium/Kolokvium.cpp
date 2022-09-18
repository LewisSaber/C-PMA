#include <fstream>
#include "Avtoservise.h"
#include "Bus.h"
#include "car.h"
#include "SUV.h"

Avtoservise** inputFromFile() {
    ifstream fin("Data.txt");
    int n;
    fin >> n;
    string m;
    string deter;
    double d, w, p;
    Avtoservise* V[100];
    for (int i = 0; i < n; i++)
    {
        fin >> deter;
        fin >> m;
        fin >> d;
        fin >> w;
        if (deter == "car") {
            car C(m, d, w);
            V[i] = &C;
           
        }
        if (deter == "Bus") {
            fin >> p;
            Bus C(m, d, w, p);
            V[i] = &C;
           
        }
        if (deter == "SUV") {
            fin >> p;
            SUV C(m, d, w, p);
            V[i] = &C;
            
        }
        
    }

    return V;
}


int main()
{
    ifstream fin("Data.txt");
    int n;
    fin >> n;
    string m;
    string deter;
    double d, w, p;
    Avtoservise* V[100];
    for (int i = 0; i < n; i++)
    {
        fin >> deter;
        fin >> m;
        fin >> d;
        fin >> w;
        if (deter == "car") {
            car C(m, d, w);
            V[i] = &C;

        }
        if (deter == "Bus") {
            fin >> p;
            Bus C(m, d, w, p);
            V[i] = &C;

        }
        if (deter == "SUV") {
            fin >> p;
            SUV C(m, d, w, p);
            V[i] = &C;

        }

    }

    /*
    ifstream fin("Data.txt");
    int n;
    fin >> n;
    Avtoservise** vehicles = inputFromFile();
    */
    V[0]->print();
    for (int i = 0; i < n; i++)
    {
      // vehicles[i]->print();
    }
}
