#include "cargo.h"
#include "InsuranceCargo.h"
#include "vector"
#include <fstream>

vector<cargo<string>> inputFromFile() {
	ifstream fin("Data.txt");
	vector<cargo<string>> vector;
	while (fin) {
		string code;
		int weight;
		int distance;
		fin >> code;
		fin >> weight;
		fin >> distance;
		cargo<string> A(code,weight,distance);
		vector.push_back(A);

	}
	vector.pop_back();
	fin.close();
	return vector;
}





vector<cargo<string>> getCargosTo(vector<cargo<string>> V, string destination) {
	vector<cargo<string>> End;
	vector<cargo<string>>::iterator it = V.begin();
	while (it != V.end()) {
		if ((*it).getCode().find(destination) != -1) {
			End.push_back(*it);
		}
		it++;

	}

	return End;
}

int main()
{
	vector<cargo<string>> V = inputFromFile();
	vector<cargo<string>>::iterator it = V.begin();
	while (it != V.end()) {
		cout << (*it).print();
		it++;
		
	}
	vector<cargo<string>> LvivCargos = getCargosTo(V, "Lviv");
	vector<cargo<string>>::iterator it2 = LvivCargos.begin();
	cout << "Cargos to Lviv: \n";
	while (it2 != LvivCargos.end()) {
		cout << (*it2).print();
		it2++;

	}
}

