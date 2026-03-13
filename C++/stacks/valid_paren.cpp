#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int len = size(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            s.push_back(s[i]);
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '}' || s[i] == ']' || s[i] == ')')
        {
            if (s[i] == s.insert())
        }
    }
}