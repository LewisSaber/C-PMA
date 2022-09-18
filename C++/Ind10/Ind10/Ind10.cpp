#include <stack>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

bool isOperator(string o) {
    if (o == "+" || o == "-" || o == "*" || o == "/" || o == "^") return true;
    return false;
}
bool isOperator(char o) {
if (o == '+' || o == '-' || o == '*' || o == '/' || o == '^') return true;
return false;
}

bool isBracket(string o) {
    if (o == "(" || o == ")") return true;
    return false;
}
bool isBracket(char o) {
    if (o == '(' || o == ')') return true;
    return false;
}
int turnToPriority(string a) {
    switch (a[0])
    {
    case '-':
    case '+':
        return 0;

    case '*':
    case '/':
        return 1;
    case '^':
        return 2;
    }
}

vector<string>  stringToVector(string input) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ')
        {
            if (isBracket(input[i]) || isOperator(input[i])) {
                if (temp != "")
                    result.push_back(temp);
                temp = "";
                temp += input[i];
                result.push_back(temp);
                temp = "";
            }
            else
                temp += input[i];
        }
    }
    if(temp != "")
    result.push_back(temp);
    return result;
}

vector<string> turnToPostfix(vector<string> input) {
    vector<string> Postfix;
    stack<string> Operators;
    for (int i = 0; i < input.size(); i++) {
        if (isOperator(input[i]) || isBracket(input[i])) {
            if (input[i] == ")") {
                while (Operators.top() != "(")
                {
                    Postfix.push_back(Operators.top());
                    Operators.pop();
                }

                Operators.pop();

            }
            else {
                if (Operators.size() == 0 || Operators.top() == "(") {
                    Operators.push(input[i]);
                }
                else
                    if (input[i] == "(")  Operators.push(input[i]);
                    else
                    {
                        if (turnToPriority(input[i]) == turnToPriority(Operators.top()))
                        {
                            Postfix.push_back( Operators.top());
                            Operators.pop();

                        }
                        else
                            while (Operators.size() != 0 && Operators.top() != "(" && turnToPriority(input[i]) <= turnToPriority(Operators.top()))
                            {


                                Postfix.push_back(Operators.top());
                                Operators.pop();
                            }
                        Operators.push(input[i]);
                    }
            }
        }
        else
        {
            Postfix.push_back(input[i]);
        }
    }
    while (Operators.size() != 0) {

        Postfix.push_back( Operators.top());
        Operators.pop();
    }
    return Postfix;
}
int solve(string input) {
    vector<string> postfix = turnToPostfix(stringToVector(input));
    stack<int> S;
    vector<string>::iterator it = postfix.begin();
    while (it != postfix.end())
    {
        if (isOperator(*it)) {
            int a = S.top() ;
            S.pop();
            int b = S.top() ;
            S.pop();
      
            if(*it == "-") S.push(b - a);
            if (*it == "+") S.push(b + a);
            if (*it == "*") S.push(b * a);
            if (*it == "/") S.push(b / a);
            if (*it == "^") S.push(b ^ a);
           
            
           
        }
        else
        {
            S.push(stoi(*it));
        }


        it++;
    }
    return S.top();
}


int main()
{
    string input;
    getline(cin,input);
    
    cout << solve(input);
    

}

