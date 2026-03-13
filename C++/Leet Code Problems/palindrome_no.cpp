#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int j = 0;
        string st = to_string(x);
        string reverse;
        int n = st.length();
        for (int i = n - 1; i >= 0; i--)
        {
            reverse += st[i];
        }
        if (reverse == st)
            return true;
        return false;
    }
};
int main()
{
    Solution s;
    bool a;
    int x;
    cout << "enter the number : ";
    cin >> x;
    if (s.isPalindrome(x))
        cout << "TRUE";
    else
        cout << "FALSE";
}
