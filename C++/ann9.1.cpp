#include <string>
#include <iostream>

using namespace std;
struct sportsman
{
    string name;
    int Grades[5] = { 0,0,0,0,0 };
    int SumofGrades = 0;

};
void InputFromConsole( sportsman& a)
{
    cout << "Enter sportsamn name : ";
        cin >> a.name;
        cout << "Enter sportsman grades : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> a.Grades[i];
            a.SumofGrades += a.Grades[i];
        }

    
}
void print(sportsman a)
{
    cout << "Best Sportsman stats : " << endl;
    cout << "Name : " << a.name << endl;
    cout << " Grades : ";
    for (int i = 0; i < 5; i++)
    {
        cout << a.Grades[i] << ", ";
    }
    cout << endl << "Sum of grades : " << a.SumofGrades;
}
int main()
{
    int maxi, max = 0;
    sportsman* a = new sportsman[10];
    for (int i = 0; i < 10; i++)
    {
        InputFromConsole(a[i]);
        if (a[i].SumofGrades > max)
        {
            max = a[i].SumofGrades;
            maxi = i;

        }

    }
    print(a[maxi]);
    return 0;
    
    
}
