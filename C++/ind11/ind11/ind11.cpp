#include <map>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

map<string,vector<string>> inputFromFile() {
	ifstream fin("Data.txt");
	map<string, vector<string>> map;
	while (fin) {
		string name;
		string adress;
		string phone;
		fin >> name;
		fin >> adress;
		fin >> phone;
		if (map[name].size() == 0)
		{
			vector<string> V;
			V.push_back(adress);
			V.push_back(phone);
			map[name] = V;
		}
		else
		{
			map[name].push_back(phone);
		}
		


	}
	fin.close();
	return map;
}
void printMap(map<string, vector<string>> M) {
	map<string, vector<string>>::iterator it = M.begin();
	it++;
	while (it != M.end()) {
		if (it->second.size() != 0)
		{
			cout << it->first << ": ";
			for (int i = 0; i < it->second.size(); i++) {
				cout << it->second[i] << " ";
			}
			cout << endl;
			it++;
		}
	}

}
void outputToFile(map<string, vector<string>> M, string adress) {
	ofstream fout("Result.txt");
	map<string, vector<string>>::iterator it = M.begin();
	while (it != M.end()) {
		if (it->second[0] == adress)
		{
		
			fout << it->first << " ";
			for (int i = 0; i < it->second.size(); i++) {
				fout << it->second[i] << " ";
			}
			fout << endl;
			
		}
		it++;
	}
	fout.close();
}

int main()
{
	map<string, vector<string>> M = inputFromFile();
	printMap(M);
	outputToFile(M, "dobryany");
	
}


