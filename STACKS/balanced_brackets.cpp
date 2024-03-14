#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<char> bracketStack;
    string brackets;

    cout << "Enter the brackets: ";
    cin >> brackets;

    for (char bracket : brackets) {
        if (bracket == '(' || bracket == '[' || bracket == '{') 
        {
            bracketStack.push(bracket);
        } 
        else if (bracket == ')' || bracket == ']' || bracket == '}') 
        {
            if (bracketStack.empty()) 
            {
                cout << "Unbalanced brackets "<<endl;
                return 0;
            }

            char topBracket = bracketStack.top();
            bracketStack.pop();

            if ((bracket == ')' && topBracket != '(') || (bracket == ']' && topBracket != '[') || (bracket == '}' && topBracket != '{')) 
                {
                cout << "Unbalanced brackets" << endl;
                return 0;
            }
        }
    }

    if (bracketStack.empty()) {
        cout << "Balanced brackets" << endl;
    } else {
        cout << "Unbalanced brackets" << endl;
    }

    return 0;
}
