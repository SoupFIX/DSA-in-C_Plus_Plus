#include <iostream>
#include <string>
using namespace std;
void reverse(char s[], int n)
{
    int i, j = n - 1;
    char c;
    for (i = 0; i < j; i++)
    {
        if (i < j)
        {
            c = s[i];
            s[i] = s[j];
            s[j] = c;
            cout << s[i];
            j--;
        }
    }
}
int main()
{
    char s[] = {'R', 'A', 'V', 'I'};
    int n = sizeof(s) / sizeof(s[0]);
    reverse(s, n);
}