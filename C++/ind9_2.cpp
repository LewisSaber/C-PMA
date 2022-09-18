
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double pi = 3.14;

struct circle
{

	int x = 0;
	int y = 0;
	int r = 0;
	//double S = 0;
	//double L = 0;

};
void EnterFromFile(circle* a, int& n)
{
    ifstream fin("Data.txt");

   
    for (int i = 0; i < n; i++)
    {
        fin >> a[i].x;
        fin >> a[i].y;
        fin >> a[i].r;
    }
}
bool CircleCollider(circle* a, int i, int j)
{
    double distance = sqrt((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y));
    int collide = false;
    if (a[i].r + a[j].r >= distance)
    {
        collide = true;
    }
    return collide;
}
double CircleArea(circle a)
{
  
    return a.r * a.r * pi;

}
double CircleLength(circle a)
{
    return 2 * a.r * pi;
}
void print(circle* a,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Circle #" << i << endl;
        cout << "X: " << a[i].x << endl;
        cout << "Y: " << a[i].y << endl;
        cout << "R: " << a[i].r << endl;
        cout << "Length : " << CircleLength(a[i]) << endl;
        cout << "Area : " << CircleArea(a[i]) << endl;
        cout << "====================================" << endl;
    }

}
void myswap(circle& a, circle& b)
{
    int temp1 = a.x;
    int temp2 = a.y;
    int temp3 = a.r;
    
    a.x = b.x;
    a.y = b.y;
    a.r = b.r;
   
    b.x = temp1;
    b.y = temp2;
    b.r = temp3;
   

}
void sort(circle* a, int n)
{
    int maxi = 0, max;

    for (int i = 0; i < n; i++)
    {
        max = CircleArea(a[i]);
        for (int j = i; j < n; j++)
        {
            if (max < CircleArea(a[j]))
            {
                max = CircleArea(a[j]);
                maxi = j;
            }
        }
        myswap(a[i], a[maxi]);
        maxi = i;
    }
   
}
int SelectCircle(circle* a,int n, int collcircle)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != collcircle)
        {
            if (CircleCollider(a, collcircle, i))
                sum++;
        }

    }
    return sum;
   
}
void FirstQUARTER(circle* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].x - a[i].r >= 0 && a[i].y - a[i].r >= 0)
        {
            cout << "Circle #" << i << endl;
            cout << "Length : " << CircleLength(a[i]) << endl;
            cout << "=============================";
        }
    }
}
int main()
{
    int n, collide,collcircle,sum = 0;

    ifstream fin("num.txt");
    fin >> n;
    circle* a = new circle[n];
    EnterFromFile(a, n);
    sort(a, n);
    print(a,n);

    cout << "Enter circle to check collision with : ";
    cin >> collcircle;
    sum = SelectCircle(a, n, collcircle);
    cout << "Number of collisions : " << sum << endl << "=============================" << endl;
    cout  << "Circle in First quarter" << endl << "==============================" << endl;
    FirstQUARTER(a, n);
    
   

   
    
    
    



}
