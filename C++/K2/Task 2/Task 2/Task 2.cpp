

#include <iostream>
#include <algorithm>
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
template<typename T>
bool is2SameObjects(list<T> L) {
	L.sort();
	//sort(L.begin(), L.end());
	typename list<T>::iterator it = L.begin();
	T last = *it;
	it++;
	while (it != L.end()) {
		if (*it == last) return true;
		last = *it;
		it++;
	}
	return false;

}

int main()
{
	list <int> L1(5);
	fillRandom(L1, 5);
	cout << "List of Numbers: "<<endl;
	print(L1);
	cout << "Is There Same Numbers: ";
	bool is2 = is2SameObjects(L1);
	cout <<  (is2 ? "Yes" : "No") << endl;
	
}
