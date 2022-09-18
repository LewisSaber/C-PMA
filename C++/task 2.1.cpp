// task 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	double x, y, z;
	cout << "input x = ";
	cin >> x;
	cout << "input y = ";
	cin >> y;
	cout << "input z = ";
	cin >> z;
	double max_val = 0;
	(y < z) ? max_val = z: max_val = y;
	double min_val = 0;
	(x > max_val) ? min_val = max_val : min_val = x;
	cout << min_val << endl;
	return 0;

}
