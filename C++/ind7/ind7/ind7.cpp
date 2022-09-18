
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void fillRandom(vector<T>& data,int max)
{

	for (int i = 0; i < data.size(); i++)
	{

		data[i] = max - (rand() % (max * 20) + 1.0) / 10;
	
	}

}
template<class T>
void printall(vector<T> data)
{
	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

template <typename T>
void quickSort(T* a, long N) {

	long i = 0, j = N;
	T temp, p;
	p = a[N >> 1];

	do {
		while (a[i] < p)  i++;
		while (a[j] > p)  j--;

		if (i <= j) {

			temp = a[i]; a[i] = a[j]; a[j] = temp;

			i++; j--;
		}
	} while (i <= j);


	if (j > 0) quickSort(a, j);
	
	if (N > i)  quickSort(a+i , N - i);
	
}
template <typename T>
void reverse(vector<T>& a){
	vector<T> b;

	typename vector<T>::reverse_iterator it = a.rbegin();
	while (it != a.rend())
	{
		b.push_back(*it);
		it++;
	}
	a = b;
	}

int main()
{
	int n = 10;
	srand(time(NULL));

	vector<double> V(n);
	fillRandom(V, 100);
	printall(V);
	double sum = 0;
	vector<double>::iterator it = V.begin();
	vector<double>::iterator maxi;
	double max = V[0];
	while (it != V.end())
	{
		if (*it > max) {
			max = *it;
			maxi = it;

		}
		it++;
	}
	cout << "Max element: " << max << endl;
	
	it = V.begin();
	vector<double> pt1;
	vector <double> pt2;
	while (it != maxi)
	{
		sum = *it + sum;
		pt1.push_back(*it);
		it++;
	}
	while (it != V.end())
	{
		pt2.push_back(*it);
		it++;
	}
	

	cout << "Sum of elements before first max: " << sum << endl;
	cout << "Sorted vector: " << endl;
	quickSort(pt2.data(), pt2.size()-1);
	reverse(pt2);
	for (int i = 0; i < pt2.size(); i++) {
		pt1.push_back(pt2[i]);
	}
	printall(pt1);
	

}

