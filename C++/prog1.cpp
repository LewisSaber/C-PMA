#include <iostream>

using namespace std;
 
 int main(){

cout << "Enter number of rows and columns : ";
int n;
cin >> n;

int M[50][50];
for(int i = 0;i < n; i++)
 {
     for(int j =0; j<n;j++)
     {
      M[i][j] = j  + n * i;
      cout << M[i][j] << " ";

     }
     cout << endl;
 }
return 0;
 }