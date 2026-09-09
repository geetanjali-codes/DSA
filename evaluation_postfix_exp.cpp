#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int main() {

    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    stack<int> s;

    for(int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        // If operand
        if(isdigit(ch)) {
            s.push(ch - '0');
        }

        // If operator
        else {

            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            int result;

            if(ch == '+')
                result = a + b;

            else if(ch == '-')
                result = a - b;

            else if(ch == '*')
                result = a * b;

            else if(ch == '/')
                result = a / b;

            s.push(result);
        }
    }

    cout << "Result = " << s.top();

    return 0;
}