
#include <iostream>
#include <vector>
#include <fstream>
#include <string>


using namespace std;


vector<int> inputFromFile(string file) {
	ifstream fin(file);
	vector<int> V;
	while (fin) {
		int number;
		fin >> number;
		V.push_back(number);
		
	}
	V.pop_back();
	fin.close();
	return V;
}
void printKratne(vector<int> V , int krat) {
	ofstream fout("Result.txt");
	vector<int>::iterator it = V.begin();
	while (it != V.end()) {
		if (*it % krat == 0)
		{
			fout << *it << " ";
			
		}
		it++;
	}
	fout.close();

}
int findFirstNegative(vector<int> V) {
	vector<int>::iterator it = V.begin();
	while (it != V.end()) {
		if (*it < 0) return *it;
		it++;
	}
}
void printVector(vector<int> V) {
	vector<int>::iterator it = V.begin();
	while (it != V.end()) {
		cout << *it << " ";
		it++;
	}
	
}
string VectorToStr(vector<int> V) {
	string str = "";
	vector<int>::iterator it = V.begin();
	while (it != V.end()) {
		str += *it;
		it++;
	}
	return str;
}
bool checkSeguence(vector<int> V, vector<int> S) {
	return VectorToStr(V).find(VectorToStr(S)) != -1;
}
bool checkSeguence(vector<int> V, string S) {
	return VectorToStr(V).find(S) != -1;
}
string BoolToExist(bool b) {
	return b ? "Exist" : "Dont Exist";
}


int main()
{
	string inputf = "input.txt";
	vector<int> Numbers = inputFromFile(inputf);
	printKratne(Numbers, 2);
	vector<int> Seguence = { 122, -17, 4 };
	cout << "Numbers: ";
	printVector(Numbers);
	cout << endl;
	cout << "First Negative: " << findFirstNegative(Numbers)<<endl;
	cout << "Seguence:";
	printVector(Seguence);
	cout << BoolToExist(checkSeguence(Numbers, Seguence));
	
}
