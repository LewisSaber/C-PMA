

#include <iostream>
#include <string>
using namespace std;
string EnterStringfromConsole()
{
	cout << "Enter string: " << endl;
	string text;
	getline(cin, text);
	return text;
}

int main()
{
	string line = EnterStringfromConsole();

	string wordout ;
	int IsWordcorrect = 1;
	int lastcommapos = -1;
	line[line.length() - 1] = ',';
	for (int i = 0; i < line.length(); i++)
	{

		if(IsWordcorrect == 1 && line[i] != ',' && line[i] != ' ')
		{
		if ((line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') && (line[i + 1] != 'a' && line[i + 1] != 'e' && line[i + 1] != 'i' && line[i + 1] != 'o' && line[i + 1] != 'u'))
		{
			IsWordcorrect = 1;

		}
		else
			if ((line[i] != 'a' && line[i] != 'e' && line[i] != 'i' && line[i] != 'o' && line[i] != 'u') && (line[i + 1] == 'a' || line[i + 1] == 'e' || line[i + 1] == 'i' || line[i + 1] == 'o' || line[i + 1] == 'u' || line[i + 1] == ' ' || line[i + 1] == ','))
			{
				IsWordcorrect = 1;

			}
			else IsWordcorrect = 0;
	}
		if (IsWordcorrect == 1 && line[i] == ',' )
		{
			for (int j = lastcommapos+1; j < i+1; j++)
				wordout = wordout + line[j];

		}
		if (line[i] == ',')
		{
			lastcommapos = i;
			IsWordcorrect = 1;
		}
	}
	if (wordout == "")
		wordout = "No correct words";

	wordout[wordout.length() - 1] = '.';
	cout <<endl << wordout;
	return 0;

}

