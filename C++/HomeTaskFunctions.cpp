

#include <iostream>
#include <fstream>
using namespace std;


int ArrLength;
int* A;
int* X;
int* Y;
int** Z;
int** M;
int** T;
int Tl, Th;
int Ml, Mh;


int Mi[3] = { 0,0,0 };
int Ma[3] = { 0,0,0 };

void EnterArrayFromKeyboard(int* &B)
{
	cout << "Enter array length : ";
	
	cin >> ArrLength;
	B = new int[ArrLength];
	cout << "Enter array: ";
	for (int i = 0; i < ArrLength; i++)
	{
		cin >> B[i];
	}

}
void EnterArrayFromFile(string file,int* &B)
{

	ifstream fin(file);
	fin >> ArrLength;
	B = new int[ArrLength];
	for (int i = 0; i < ArrLength; i++)
	{
		fin >> B[i];
	}
	
}
void OutputArrayInConsole(int* &B,int l)
{
	for (int i = 0; i < l; i++)
	{
		cout << B[i] << " ";
	}
}
void OutputArrayInFile(string file, int*& B, int l)
{
	ofstream fin(file);
	for (int i = 0; i < l; i++)
		fin << B[i] << " ";
	
}
int Arraymin(int* B,  int l)
{
	
	Mi[0] = B[0];
	for (int i = 0; i < l; i++)
	{
		if (Mi[0] > B[i])
		{
			Mi[0] = B[i];
			Mi[1] = i;
		}
	}
	return Mi[0];
}
int Arraymax(int* B, int l)
{
	
	Ma[0] = B[0];
	for (int i = 0; i <l; i++)
	{
		if (Ma[0] < B[i])
		{
			Ma[0] = B[i];
			Ma[1] = i;
		}
	}
	return Ma[0];
}
int ArraySum(int* B, int l)
{
	int summa = 0;
	for (int i = 0; i < l; i++)
		summa += B[i];
	return summa;
}
int ArrayProduct(int* B, int l)
{
	int prod = 1;
	for (int i = 0; i < l; i++)
		prod = B[i] * prod;
	return prod;
}
void SumofArrays(int* B, int* C,int* &D,int l)
{
	for (int i = 0; i < l; i++)
	{
		D[i] = B[i] + C[i];
	}
}
void DiffofArrays(int* B, int* C, int*& D, int l)
{
	for (int i = 0; i < l; i++)
	{
		D[i] = B[i] - C[i];
	}
}
void ArrayProductMatrix(int* B, int* C, int** &D,int height,int length)
{
	D = new int* [height];
	for (int i = 0; i < height; i++)
		D[i] = new int[length];
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			D[i][j] = B[i] * C[j];
		}
	}
}
void ArrayProductArray(int* B, int* C, int*& D , int l)
{
	for (int i = 0; i < l; i++)
	{
		D[i] = B[i] * C[i];
	}

}
int ArrayProductScalar(int* B, int* C,  int l)
{
	
	ArrayProductArray(B, C, B,l);
	return ArraySum(B,l);
	
}
void EnterMatrixFromKeyboard(int**& B,int l,int h)
{
	
	cout << "Enter matrix length : ";
	cin >> l;
	cout << "Enter matrix height : ";
	cin >> h;
	B = new int* [h];
	for (int i = 0; i <h; i++)
		B[i] = new int[l];
	cout << " Enter matrix : ";

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cin >> B[i][j];
		}
		
	}


}
void OutputMatrixInConsole(int** B,int h,int l )
{

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
}
void EnterMatrixFromFile(string file,int**& B, int &h, int &l)
{
	ifstream fin(file);
	fin >> h;
	fin >> l;

	B = new int* [h];
	for (int i = 0; i < h; i++)
		B[i] = new int[l];
	

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			fin >> B[i][j];
		}
	}
}
void OutputMatrixInFile(string file, int**& B, int h, int l)
{
	ofstream fin(file);
	
	fin << h << " " << l << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
			fin << B[i][j] << " ";
		fin << endl;
	}
}
int MatrixMin(int** B,int h,int l)
{
	Mi[0] = B[0][0];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if (B[i][j] < Mi[0])
			{
				Mi[0] = B[i][j];
				Mi[1] = i;
				Mi[2] = j;
			}
		}
	}
	return Mi[0];
}
int MatrixMax(int** B, int h, int l)
{
	Ma[0] = B[0][0];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if (B[i][j] > Ma[0])
			{
				Ma[0] = B[i][j];
				Ma[1] = i;
				Ma[2] = j;
			}
		}
	}
	return Mi[0];
}
int MatrixSum(int** B,int h,int l)
{
	int sum = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			sum += B[i][j];
		}
	}
	return sum;
}
void SumOfMatrix(int** B, int** C,int ** D, int h, int l)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			D[i][j] = B[i][j] + C[i][j];
		}
	}

}
void DiffOfMatrix(int** B, int** C, int** D, int h, int l)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			D[i][j] = B[i][j] - C[i][j];
		}
	}

}
void TranspondMatrix(int** B, int h, int l,int**&C)
{
	int** TM;
	TM = new int* [h];
	for (int i = 0; i < h; i++)
		TM[i] = new int[l];
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < l; j++)
				{
					TM[i][j] = B[j][i];
				}
			}
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < l; j++)
			{
				C[i][j] = TM[i][j];
			}
		}

}
void MatrixProduct(int** B, int h, int l, int** C, int h2, int l2,int**&D)
{
	int** MM;
	MM = new int* [h2];
	for (int i = 0; i < h2; i++)
		MM[i] = new int[l];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			MM[i][j] = 0;
		}
	}
	

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l2; j++)
		{
			for (int k = 0; k < l; k++)
			{
				
					MM[i][j] = B[i][k] * C[k][j] + MM[i][j];
				
			}
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			D[i][j] = MM[i][j];
		}
	}
}
int main()
{
	Y = new int[ArrLength];
	Z = new int*[ArrLength];
	for (int i = 0; i < ArrLength; i++)	
		Z[i] = new int[ArrLength];

	EnterMatrixFromFile("Data.txt", M, Mh, Ml);
	EnterMatrixFromFile("Data1.txt", T, Th, Tl);
	int** R;
	R = new int* [Mh];
	for (int i = 0; i < Mh; i++)
		R[i] = new int[Tl];
	MatrixProduct(M, Mh, Ml, T, Th, Tl, R);
	OutputMatrixInConsole(R, Mh, Tl);




	
	
}

