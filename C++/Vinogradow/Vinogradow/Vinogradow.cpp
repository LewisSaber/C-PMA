#include <vector>
#include <iostream>

using namespace std;

template <typename T>
void fillRandom(vector<vector<T>>& data,int n, int max)
{

	for (int i = 0; i < data.size(); i++)
	{
		for (int j = 0; j < n; j++)
		{
			data[i].push_back( max - (rand() % (max * 20) + 1.0) / 10);

		}
	}

}
template <typename T>
void printall(vector<vector<T>>& data) {
	for (int i = 0; i < data.size(); i++)
	{
        cout << " ";
		for (int j = 0; j < data[0].size(); j++)
		{
			cout << data[i][j] << "\t";
		}
		cout << endl;
	}
}
template <typename T>
vector<vector<T>> Vinogradow(vector<vector<T>>& A, vector<vector<T>>& B) {
    int N = A.size();
    int d = N>>1;
    
    vector<vector<T>> C(N);
    for (int i = 0; i < N; i++)C[i].resize(N);

    vector<T> rowFactor(N, 0);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < d; ++j) {
            rowFactor[i] += A[i][2 * j] * A[i][2 * j + 1];
        }
    }

    vector<T> columnFactor(N, 0);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < d; ++j) {
            columnFactor[i] += B[2 * j][i] * B[2 * j + 1][i];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            C[i][j] = -rowFactor[i] - columnFactor[j];
            for (int k = 0; k < d; k++) {

                C[i][j] = C[i][j] + (A[i][2 * k] + B[2 * k + 1][j]) * (A[i][2 * k + 1] + B[2 * k][j]);

            }
        }
    }
    // поправка на непарність
    if (N % 2 == 1) {
        for (size_t i = 0; i < N; i++) {
            for (size_t j = 0; j < N; j++) {
                C[i][j] += A[i][N - 1] * B[N - 1][j];
            }
        }
    }
    return C;
}
template <typename T>
void makeZero(vector<vector<T>>& data) {
    for (int i = 0; i < data.size(); i++)
    {
        for (int j = 0; j < data.size(); j++)
        {
            if (i == j) data[i].push_back(1);
            else data[i].push_back(0);
        }

    }
        
}


int main()
{
	int n = 2;
	vector<vector<int>> A(n);
    vector<vector<int>> B(n);
    makeZero(A);
    fillRandom(B, n, 5);
    cout << " A: " << endl;
    printall(A);
    cout << endl << " B: " << endl;
    printall(B);
    vector<vector<int>> C = Vinogradow(A, B);
    cout << endl << " AxB : " << endl;
    printall(C);
}

