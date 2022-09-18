

#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int n, m,specialNum = 0; //n,m - розмірність матриці, specialNum - кількість особливих елементів
    int sum;
    cout << "Input n: ";
    cin >> n;
    cout << "Input m : ";
    cin >> m;
    int** A = new int*[n];// 14-18 рядок - створення дин матриці
    for (int i = 0; i < n; i++)
    {
        A[i] = new int[m];      
    }

    for (int i = 0; i < n; i++) //заповнення матрицы випадковими числами
    {
        for (int j = 0; j < m; j++)
            A[i][j] = rand() % (30 * (i + 1) * (j + 1)); //(30* (i+1) * (j+1)) - для того щоб був шанс згенерувати особливе число
    }
    for (int i = 0; i < n; i++)//вивід матриців консоль
    {
       
        for (int j = 0; j < m; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < n; i++)//знаходження кількості особливих елементів
    {
        sum = 0;
        for (int j = 0; j < m; j++)
            sum += A[i][j];
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] > sum - A[i][j])
                specialNum++;
        }
    }
    cout << "Amount of special numbers : " << specialNum;
    



}

