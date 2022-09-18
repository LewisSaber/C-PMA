
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
	cout << data[data.size() - 1] << "x^" << data.size() - 1 << " ";
	for (int i = data.size() - 2; i > 0; i--)
	{
		if (data[i] != 0) {
			if (data[i] > 0) cout << "+";
			cout << data[i] << "x^" << i <<" ";
		}
		
	}
	if(data.size() > 2)
	if (data[0] > 0) cout << "+";
	cout << data[0];
	cout << endl;

}
template <typename T>
T Horner(vector<T>& data, T x) {
	T result = data[data.size() - 1];
	for (int i = data.size()-2; i >=0 ; i--) {
		result = x * result + data[i];
		cout << "iterator: " << i << endl;
		cout << "result: " << result<<endl;
	}
	//result += data[0];

	return result;
}

int main()
{
	//srand(time(NULL));
	int n = 5;
	vector<int> V(n);
	fillRandom(V, 10);

	printall(V);
	double result = Horner(V, 1);
	cout << "Result: " << result;
}

