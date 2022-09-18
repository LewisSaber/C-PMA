
#include "Priam.h"
#include <string>
#include <iostream>
#include <cmath>
#include <fstream>

Priam::Priam()
{
    m_length = 1;
    m_width = 1;

}
Priam::Priam(int length)
{
    m_length = length;
    m_width = 1;

}
Priam::Priam(int length,int width)
{
    m_length = length;
    m_width = width;

}
Priam::Priam(const Priam& a)
{
    m_length = a.m_length;
    m_width = a.m_width;

}
double Priam::FindDiagonal()
{
    double diagonal = sqrt(m_length * m_length + m_width * m_width);
    return diagonal;
}
bool Priam::isSquare()
{
    bool statement = 0;
    if (m_length == m_width)
        statement = 1;
    return statement;

}
void Priam::Input()
{
    cout << "Enter length : ";
        cin >> m_length;
        cout << "Enter width : ";
        cin >> m_width;

}
void Priam::Print(int n)
{
    cout << "Rectangle # " << n<<endl << "Length :  " << m_length << endl << "Width : " << m_width << endl << "Area : " << Area() << endl << "Perim : " << Perum() << endl;

}
int Priam::GetLength() { return m_length; }
int Priam::GetWidth() { return m_width; }
bool Priam::IsSame(const Priam& a)
{
    bool statement = 0;
    if (m_length == a.m_length && m_width == a.m_width)
        statement = 1;
    return statement;
}
int Priam::Perum() { return (2 * (m_length + m_width)); }
int Priam::Area() { return (m_length * m_width); }
bool Priam::IsBigger(Priam& a)
{
    bool statement = 0;
  
    if (Perum() > a.Perum())
        statement = 1;
    return statement;
}
void Priam::SetLength(int length) { m_length = length; }
void Priam::SetWidth(int width) { m_width = width; }
void EnterFromFile(string file, Priam* a)
{
    int n;
    int length, width;
    string name;
    ifstream fin(file);
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> length;
        fin >> width;
        a[i].SetLength(length);
        a[i].SetWidth(width);

    }
}
void print(Priam* a,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Rectangle # " << i << endl << "Length : " << a[i].GetLength() << endl << "Width : " << a[i].GetWidth() << endl << "Area : " << a[i].Area() << endl << "Perim : " << a[i].Perum() << endl<< endl ;

    }
}
int FindMinArea(Priam* a, int n)
{
    int min = a[0].Area();
   int min_i = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > a[i].Area())
            min = a[i].Area();
        min_i = i;
    }
    return min_i;

}
void Priam::CopyFrom(const Priam& a)
{
    m_length = a.m_length;
    m_width = a.m_width;
  
}
void myswap(Priam& a, Priam& b)
{
    Priam temp(a);
    a.CopyFrom(b);
    b.CopyFrom(temp);

}
void SortByPerum(Priam* a, int n)
{
    int min;
    int minj;
    for (int i = 0; i < n; i++)
    {
        min = a[i].Perum();
        minj = i;
        for (int j = i; j < n; j++)
        {
            if (min >= a[j].Perum())
            {
                min = a[j].Perum();
                minj = j;
            }
        }
        myswap(a[i], a[minj]);

    }
    //myswap(a[n - 1], a[n - 2]);

}

int main()
{
    string file = "Data.txt";
    ifstream fin(file);
    int n;
    int k = 0;
    fin >> n;
    fin.close();

    Priam* a = new Priam[n];
    EnterFromFile(file, a);
    print(a, n);
    int min_i = FindMinArea(a, n);
    
    cout << endl << endl << "Minimal area in : " << endl  ;
    a[min_i].Print(min_i);
    SortByPerum(a, n);
    cout << endl << "After sorting : " << endl;
    print(a, n);
    cout << "Squares : " << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i].isSquare())
            {
                a[i].Print(i);
                cout<< "diagonal : " << a[i].FindDiagonal() << endl;
                k++;
            }
        }
        if (k == 0)
        {
            cout << "No squares found !";
        }
}

