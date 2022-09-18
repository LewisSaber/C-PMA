#include <string>
#include <iostream>

using namespace std;
string Spaceremover()
{
	
	string text;
	string result;


	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ' && i > 0 && text[i - 1] != ' ')
			result = result + " ";
		else
		if (text[i]!=' ')
		result = result + text[i];
	}
	return result;
	
}

