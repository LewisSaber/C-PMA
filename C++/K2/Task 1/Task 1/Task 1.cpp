

#include <iostream>
#include "worker.h"
#include <vector>


vector<worker>  readFromFile(string filename) {
	ifstream fin(filename);
	vector<worker> Workers;
	while (fin) {
		string name;
		string status;
		string posada;
		int fullstaj;
		int partialstaj;
		int salary;
		fin >> name;
		fin >> status;
		fin >> posada;
		fin >> fullstaj;
		fin >> partialstaj;
		fin >> salary;
		replace(name.begin(), name.end(), '_', ' ');
		
		worker A(name, status,posada, fullstaj, partialstaj, salary);
		Workers.push_back(A);


	}
	Workers.pop_back();
	fin.close();
	
	return Workers;
}
vector<worker> listOf10StajMembers(vector<worker> Workers) {
	vector<worker> newWorkers;
	
	vector<worker>::iterator it = Workers.begin();
		while(it != Workers.end()) {
			if ((*it).getFullStaj() >= 10)
			{
				
				newWorkers.push_back(*it);

			}
			it++;

	}
		sort(newWorkers.begin(), newWorkers.end());
		return newWorkers;

}
void Print(vector<worker> Workers) {
	vector<worker>::iterator it = Workers.begin();
	while (it != Workers.end()) {
		(*it).print();
		cout << endl;
		it++;

	}
}
void SaveWorkers(vector<worker> Workers,string file) {
	ofstream fout(file);
	vector<worker>::iterator it = Workers.begin();
	while (it != Workers.end()) {
		fout << (*it).stringjufy();
		fout << endl;
		it++;
	}
	fout.close();

}


int main()
{
	string workfile = "Workers.txt";
    vector<worker> Workers = readFromFile(workfile);
	vector<worker> Workers10 = listOf10StajMembers(Workers);
	

	Workers[2].rankUp();
	Workers[2].print();
	SaveWorkers(Workers,workfile);
    
}


