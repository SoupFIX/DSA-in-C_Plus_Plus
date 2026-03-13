// This is the c ++ code for converting a infix expression to a postfix expression
#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>
using namespace std;
// function to decide the precedenc of the operators
//'^'has highest precedence followed by (*==/),followed by (+==-).
int precis(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    return -1;
}
// function to convert the infix expression to a postfic epression
string infix_to_postfix(string s)
{
    // res is the result string which will hold the postfic expression
    // st is the stack which will help in the operation
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    { // if a operand comes put it on the ans string
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        // if a opening bracket comes push it into the stack
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        // if a closing brace comes
        else if (s[i] == ')')
        { // then push and pop elements from the stack
            // until a closing brace comes
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            // if no closing is there then pop the rest elements
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        { // if a operator comes check if the precedence of the stacks top is greater or
            // equal to the strings current precedence if yes put it on the ans string
            while (!st.empty() && precis(st.top()) >= precis(s[i]))
            {
                res += st.top();
                st.pop();
            }
            // push the current operator of the string to the stack
            st.push(s[i]);
        }
    }
    // checking if there is any leftover elements or not
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    // return the postfix expression as a string
    return res;
}
// driver code
int main()
{
    string s;
    // input of the infix expression
    cout << "Enter the expression : ";
    getline(cin, s);
    // prinitng the postfix expression
    cout << infix_to_postfix(s);
    return 0;
}