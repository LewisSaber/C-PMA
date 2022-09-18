#include <string>
#include <iostream>
using namespace std;
string SpaceRemover(string text)
{
	string result;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ' && i > 0 && text[i - 1] != ' ')
			result = result + " ";
		else
			if (text[i] != ' ')
				result = result + text[i];
	}
	return result;
}
string EnterString()
{
	cout << "Enter string: " << endl;
	string text;
	getline(cin, text);
	return text;
}
int main()
{
	string line = EnterString();
	line  = SpaceRemover(line);

	string result ;
	char temp ;
	temp = line[0];
	
	for (int i = 1; i < line.length() - 1;i++ )
	{
		if (line[i] == ' ' )
		{
			temp = line[i + 1] ;
		
		}
		else
			if(line[i-1] != ' ')
			result = result + line[i];
		     
		if (line[i + 1] == ' ' || line[i + 1] == '.')
			result = result +  temp + ' ';
		
	}
	result = result + '.';
	cout << result;
}
