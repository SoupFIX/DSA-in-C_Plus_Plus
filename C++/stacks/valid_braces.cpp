#include <iostream>
#include <stack>
using namespace std;
// function to push_opening braces
bool is_valid(string s, int len)
{
    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        { // push all the opening braces
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            if (st.top() == '(' && s[i] == ')' || st.top() == '[' && s[i] == ']' || st.top() == '{' && s[i] == '}')
            {
                st.pop();
            }
            //  st.pop();
        }
    }
    return st.empty();
}
// driver code
int main()
{
    string s;
    int i = 6, len = 0;
    stack<char> st;
    cout << "enter tehe string : ";
    cin >> s;
    bool check;
    len = s.length();
    check = is_valid(s, len);
    if (check)
    {
        cout << "It is a valid parenthesis.";
    }
    else
    {
        cout << "It is not a valid paranthesis!";
    }
    return 0;
}
