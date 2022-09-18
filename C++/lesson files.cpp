

#include <iostream>

using namespace std;
int main()
{
	ifstream fin("Data.txt");
	int length, height;
	float aver=0;
	int** A;
	fin >> length;
	fin >> height;
	A = new int* [height];
	for (int i = 0; i < height; i++)
	{
		A[i] = new int[length];
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			fin >> A[i][j];
			aver += A[i][j];
		}
	}
	aver = aver / (height * length);
	fin.close();
	cout << "n=" << aver << endl;

	return 0;

}
