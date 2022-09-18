

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string>  stringToVector(string input) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ')
        {
            if (input[i] == ',' || input[i] == '.') {
                if (temp != "")
                    result.push_back(temp);
                temp = "";
                
            }
            else
                temp += input[i];
        }
    }
    if (temp != "")
        result.push_back(temp);
    return result;
}
int findSum(string str) {
    vector<string> V = stringToVector(str);
    int sum = 0;
    for (int i = 0; i < V.size(); i++) {
        sum += stoi(V[i]);
    }
   
    return sum;
}


int main()
{
    string str = "1,2.";
    getline(cin, str);
    cout <<"Sum : "<< findSum(str);
}

