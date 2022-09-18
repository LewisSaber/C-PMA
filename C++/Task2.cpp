

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
        cin >> n;
        int** A = new int* [n];
        int** B = new int* [n];
        for (int i = 0; i < n; i++)
        {
            A[i] = new int[n];
            B[i] = new int[n];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                A[i][j] = rand() % 10;
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                B[n-1-j][i] = A[i][j];
            }
        }
        cout << endl << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               
                cout << B[i][j] << " ";
            }
            cout << endl;
        }


}

