#include <iostream>
#include<string>
#include <fstream>
using namespace std;
struct Student {
    string name;
    string last_name;
    int date[3] = { 0,0,0 };
    double point[5] = { 0,0,0,0,0 };
};

void print(Student st) {
    cout << "Name: " << st.name << '\t';
    cout << "Surname: " << st.last_name << '\t';
    cout << "Birthday: " << st.date[0] << "." << st.date[1] << "." << st.date[2] << '\t';
    cout << "Marks: " << st.point[0] << "," << st.point[1] << "," << st.point[2] << "," << st.point[3] << "," << st.point[4] << endl;

}
void InputFile(Student* st, int n) {
    ifstream fin("Data.txt");
    for (int i = 0; i < n; i++) {
        fin >> st[i].name;
        fin >> st[i].last_name;
        fin >> st[i].date[0] >> st[i].date[1] >> st[i].date[2];
        fin >> st[i].point[0] >> st[i].point[1] >> st[i].point[2] >> st[i].point[3] >> st[i].point[4];
       
    }
}
/*double sort_age(Student st) {
    for (int i = 0; i < n; i++) {

    }
}*/
double FindAverage(Student* st, int n)
{
    double aver = 0;
    for (int i = 0; i < n; i++)
    {
        aver = aver + (2021 - st[i].date[2]);

    }
    aver = aver / n;
    return aver;
}
int SumOfGrades(Student st)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += st.point[i];
    return sum;
}
void OlderThenAverage(Student* st, Student* os, int n)
{
    double aver = FindAverage(st, n);
    int i2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (2021 - st[i].date[2] > aver)
        {
            os[i2] = st[i];
            i2++;
        }
    }
}
void SWAP(Student& a, Student& b)
{
    Student temp = a;
    a = b;
    b = temp;
}
void sortbygrade(Student* st, int n)
{
    int min;
    int minj = 0;
    for (int i = 0; i < n; i++)
    {
        min = SumOfGrades(st[i]);
        for (int j = i; j < n; j++)
        {
            if (min > SumOfGrades(st[j]))
            {
                min = SumOfGrades(st[j]);
                minj = j;
            }
        }
        SWAP(st[i], st[minj]);
        minj = i;
    }
    SWAP(st[n - 1], st[n - 2]);
}

void main(){
    int n = 6;
    Student* st = new Student[n];
    Student* os = new Student[n/2+1];
    InputFile(st, n);
    for (int i = 0; i < n; i++)
    print(st[i]);
    OlderThenAverage(st, os, n);
    sortbygrade(os, n/2+1);

    cout << endl << endl << endl;
    for (int i = 0; i < n/2+1 ; i++)
    {
        print(os[i]);
       
    }



}