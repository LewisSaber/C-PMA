#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

template <typename T>

void fillRandom(list<T>& data, int max)
{
typename list<T>::iterator it = data.begin();
while (it != data.end()) {
	*it = max - (rand() % (max * 20) + 1.0) / 10;
	it++;
}

}
template <typename T>
void print(list<T>& data)
{
	typename list<T>::iterator it = data.begin();
	while (it != data.end()) {
		cout << *it << " ";
		it++;
	}
	cout << endl;

}
template <typename T>
void removeRepeat(list<T>& data) {
	list<T> Lend;
	data.sort(greater<int>());
	typename list<T>::iterator it = data.begin();
	T last = *it;
	Lend.push_back(*it);
	it++;

	while (it != data.end()) {
		if (*it != last)
		{
			Lend.push_back(*it);
		}
		last = *it;
			  it++;
	}
	data = Lend;
}
template <typename T>
void insertSorted(list<T>& data, T value) {
	data.push_back(value);
	data.sort(greater<int>());
}
template <typename T>
list<T> connectLists(list<T>& L1, list<T>& L2)
{
	list<T> Lend;
	typename list<T>::iterator it = L1.begin();
	while (it != L1.end()) {
		Lend.push_back(*it);
		it++;
	}
	it = L2.begin();
	while (it != L2.end()) {
		Lend.push_back(*it);
		it++;
	}
	return Lend;

}



int main()
{
	list <int> L1(20);
	fillRandom(L1, 5);

	L1.sort(greater<int>());
	cout << "L1 sorted : " << endl;
	print(L1);
	int E = 8;
	cout << "L1 after inserting "<< E <<": " << endl;
	insertSorted(L1,E);
	print(L1);
	removeRepeat(L1);
	
	cout << "L1 after removing repeated: " << endl;
	print(L1);
	list <int> L2(10);
	fillRandom(L2, 10);
	cout << "L2: " << endl;
	print(L2);
	list<int> Lend = connectLists(L1, L2);
	removeRepeat(Lend);
	cout << "L1 + L2 without repeat: " << endl;
	print(Lend);






}

