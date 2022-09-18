#include "worker.h"

worker::worker()
{
	name = "none";
	status = "none";
	posada = "none";
	fullStaj = 0;
	partialStaj = 0;
	salary = 0;
}


worker::worker(string N, string S,string Po, int F,int P, int Sa)
{
	name = N;
	 status = S;
	 posada = Po;
	 fullStaj = F;
	 partialStaj  = P;
      salary = Sa;
}

void worker::print()
{
	cout << name << ": " << endl <<
		"Status: " << status << endl <<
		"Posada: " << posada << endl<<
		"Full working Staj: " << fullStaj << " years" << endl <<
		"Works in Company For: " << partialStaj << " years" << endl <<
		"Salary: " << salary << endl;

}

string worker::getName()
{
	return name;
}

int worker::getFullStaj()
{
	return fullStaj;
}

bool worker::operator<(const worker W)
{
	return name.substr(0, name.find(' ')) < W.name.substr(0, W.name.find(' '));
	
}

void worker::rankUp()
{
	const int l = 4;
	string Ranks[l] = { "Worker","Manager","Headmanager","Owner" };

		
	
	if (posada == "Worker") status = "head";
	
	
	if (posada != Ranks[l - 1]) {
		for (int i = 0; i < l; i++) {
			if (Ranks[i] == posada) {
				posada = Ranks[i + 1];
				i = l;
			}

		}
	}
}

string worker::stringjufy()
{
	string N = name;
	replace(N.begin(), N.end(), ' ', '_');
	return N + " " + status + " " + posada + " " + to_string(fullStaj) + " " + to_string(partialStaj) + " " + to_string(salary);
}

