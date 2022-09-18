
#include <iostream>
#include <string>
#include<fstream>

using namespace std;


struct fbclub
{
    string name;
    int year = 0;
    string city;
};
void myswap(fbclub& a, fbclub& b)
{
    string temp1 = a.name;
   int temp2 = a.year;
   string temp3 = a.city;
    a.name = b.name;
    b.name = temp1;
    a.year = b.year;
    b.year = temp2;
    a.city = b.city;
    b.city = temp3;
}
void sortbyname(fbclub*a,int n)
{
    string min;
    int minj = 0;
    for (int i = 0; i < n; i++)
    {
        min = a[i].name;
        for (int j = i; j < n; j++)
        {
            if (min > a[j].name)
            {
                min = a[j].name;
                minj = j;
            }
        }
        myswap(a[i], a[minj]);
        minj = i;
    }
    myswap(a[n - 1], a[n - 2]);
}
void EnterFromFile(fbclub* a, int& n)
{
    ifstream fin("Data.txt");
   
    for (int i = 0; i < n; i++)
    {
        fin >> a[i].name;
        fin >> a[i].year;
        fin >> a[i].city;
    }
}
void print(fbclub a)
{
   
    cout << "Club name : " << a.name << endl;
    cout << "Foundation year : " << a.year << endl;
    cout << "City they represent : " << a.city << endl;
    cout << "========================================"<<endl;
}
int minyear(fbclub* a,int n)
{
    int mini = 0;
    int minyear, minj = 0;
    minyear = a[0].year;
    for (int i = 0; i < n; i++) {
        if (a[i].year < minyear)
        {
            minyear = a[i].year;
            mini = i;

        }
    }
    
  return mini;
}

int main()
{
    
    int n,mini ;
    
    ifstream fin("number.txt");
    fin >> n;
    fbclub* a = new fbclub[n];
  
        EnterFromFile(a,n);
  
       
        sortbyname(a, n);
        for (int i = 0; i < n; i++) {
            print(a[i]);
        }
        mini = minyear(a, n);
        cout << "Oldest club info : " << endl;
        print(a[mini]);

}
 