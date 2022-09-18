
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void fillRandom(vector<T>& data, int max)
{
	for (int i = 0; i < data.size(); i++)
	{
		data[i] = max - (rand() % (max * 20) + 1.0) / 10;
	}
}

template <typename T>
void printall(vector<T>& data)
{
	cout << " ";
	cout << data[data.size() - 1] << "x^" << data.size() - 1 << " ";
	for (int i = data.size() - 2; i >= 0; i--)
	{
		if (data[i] != 0) {
			if (data[i] > 0) cout << "+";
			cout << data[i];
			if (i > 0 ) cout << "x";
			if (i > 1) cout << "^" << i;
		cout << " ";
		}
		
	}
	cout << endl;

}
template <typename T>
T Horner(vector<T>& data, T x) {
	T result = data[data.size() - 1];
	for (int i = data.size()-2; i >=0 ; i--) {
		result = x * result + data[i];
	}
	return result;
}


int main()
{
	srand(time(NULL));
	int n = 5;
	vector<int> V(n);
	fillRandom(V, 10);
	int x0 = 1;
	double result;
	printall(V);
	result = Horner(V, x0);
	cout << " x: " << x0<<endl;
	cout << " Result: " << result;
	cout << endl << endl;
	fillRandom(V, 30);
	x0 = 3;
	printall(V);
	result = Horner(V, x0);
	cout << " x: " << x0 << endl;
	cout << " Result: " << result;
	cout << endl << endl;



}

