#include <iostream>

using namespace std;

int main() {
    int M[50][50];
    int n; bool repeat = 1;
    while (repeat) {
        cout << "Enter number of rows and columns : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                M[i][j] = (j + 1) + n * i;
                cout << M[i][j] << " ";

            }
            cout << endl;
        }
        cout << "Enter 1 to go again, 0 to stop : ";
        cin >> repeat;
    }
    return 0;
}