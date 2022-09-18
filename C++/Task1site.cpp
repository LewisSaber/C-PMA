

#include <iostream>
using namespace std;

class Numbers
{
public:
	int m_num1;
	int m_num2;
	void set(int a,int b)
	{
		m_num1 = a;
		m_num2 = b;
	}
	void print()
	{
		cout << "Numbers(" << m_num1 << "," << m_num2 << ")" << endl;
	}

};



int main()
{
	Numbers n1;
	n1.set(3, 3); // инициализируем объект n1 значениями 3 и 3

	Numbers n2{ 4, 4 }; // инициализируем объект n2 значениями 4 и 4

	n1.print();
	n2.print();
}

