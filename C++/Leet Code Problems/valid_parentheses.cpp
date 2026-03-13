#include <iostream>
using namespace std;
class Solution
{
public:
    string isValid(string s)
    {

        int i, len = s.length();
        for (i = 0; i < len; i++)
        {
            if (s[i] == '(' && s[i + 1] == '[' || s[i] == '[' && s[i + 1] == '(' || s[i] == '{' && s[i + 1] == '(' || s[i] == '{' && s[i + 1] == '[')
            {
                if (s[len - 2] == ']' && s[len - 1] == ')' || s[len - 1] == ']' && s[len - 2] == ')' || s[len - 1] == '}' && s[len - 2] == ')' || s[len - 1] == '}' && s[len - 2] == ']')
                {
                    return "true";
                }
                return "false";
            }
            if (s[i] == '(')
            {
                if (s[i + 1] == ')')
                {
                    return "true";
                }
                return "false";
            }
            if (s[i] == '{')
            {
                if (s[i + 1] == '}')
                {
                    return "true";
                }
                return "false";
            }
            if (s[i] == '[')
            {
                if (s[i + 1] == ']')
                {
                    return "true";
                }
                return "false";
            }
            if (s[i] == '(' && s[i + 2] == '[' && s[i + 4] == '{')
            {
                if (s[i + 1] == ')' && s[i + 3] == ']' && s[i + 5] == '}')
                {
                    return "true";
                }
                return "false";
            }
        }
        return "false";
    }
};
int main()
{
    Solution s1;
    string s, result;
    cout << "enter the string : ";
    cin >> s;
    result = s1.isValid(s);
    cout << result;
    return 0;
}