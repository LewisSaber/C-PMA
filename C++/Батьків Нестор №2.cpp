
#include <iostream>
using namespace std;
int main()
{
	bool repeat = 1;//для повторення програми
	int** A;
	int length, height, posit=0,negat=0,zero=0;//posit - числа >0 / negat <0 / zero == 0
	while (repeat)
	{
		srand(time(NULL));//для того щоб числа завжди були випадкові
		
		cout << "Enter matrix length : ";
		cin >> length;
		cout << "Enter matrix height : ";
		cin >> height;
		A = new int* [height];//17-21 рядок - створення дин. матриці
		for (int i = 0; i < height; i++)
		{
			A[i] = new int[length];
		}
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < length; j++)
			{
				A[i][j] = -10  + rand() % 20;//заповнення матриці випадковими числами [-10;10]
				cout << A[i][j] << " ";//виведення матриці
				if (A[i][j] < 0)
					negat++;
				if (A[i][j] == 0)
					zero++;
				if (A[i][j] > 0)
					posit++;
			}
			cout << endl;
		}
		cout << "Number of x > 0 : " << posit << endl;
		cout << "Number of x = 0 : " << zero << endl;
		cout << "Number of x < 0 : " << negat << endl;


		posit = negat = zero = 0; //очищення значення пере новим запском програми
		cout << "Enter 1 to go again, 0 to stop : ";
		cin >> repeat;
	}
	return 0;
}

