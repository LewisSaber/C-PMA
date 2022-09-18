#include<iostream>
#include<fstream>
#include "Human.h"
#include "Patient.h"
#include"Doctor.h"
using namespace std;
Doctor* get_doctors(int &n)
{
 
   
    ifstream fin("Doctors.txt");
    fin >> n;
    Doctor* A = new Doctor[n];
    string input[5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            fin >> input[j];
      
      A[i].set(input[0], input[1], stoi(input[2]), input[3], stoi(input[4]));
    }
    return A;
  
   
}
Patient* get_patients(int& n)
{
    ifstream fin("Patients.txt");
    fin >> n;
    Patient* A = new Patient[n];
    string input[5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            fin >> input[j];
        A[i].set(input[0], input[1], stoi(input[2]), input[3],input[4]);
    }
    return A;
}
void PRINT(Human** A, int &n)
{
    for (int i = 0; i < n; i++)
    {
        A[i]->print();
    }

}

void sort(Human** A, int& n,string a)
{
    Human* temp;
    string min;
    int minj = 0;
    for (int i = 0; i < n; i++)
    {
        minj = i;
        min = A[i]->get_I(a);
        for (int j = i; j < n; j++)
        {
            if (min > A[j]->get_I(a))
            {
                min = A[j]->get_I(a);
                minj = j;
            }
        }
        temp = A[minj];
        A[minj] = A[i];
        A[i] = temp;
        
    }
    // SWAP(A[n - 1], A[n - 2]);
}




int main()
{
    int ndoctors = 0;
    int npatients = 0;
    Doctor* D = get_doctors(ndoctors);
    Patient* P = get_patients(npatients);
   int total = ndoctors + npatients;
   // Human* People= new Human[ndoctors + npatients];
    Human* People[100];
    for (int i = 0; i < ndoctors; i++)
   {
    People[i] =  &D[i] ;
      }
    for (int i = 0; i < npatients; i++)
    {
        People[i + ndoctors] = &P[i];
    }
   // PRINT(People, total);
    PRINT(People, total);

    cout << "---------------" << endl;
    sort(People, total, "age");
    PRINT(People, total);
   
    cout << "---------------" << endl;
   // SWAP(People[1], People[2]);
   // PRINT(People, total);
  
    
  
}

