#include <iostream>
using namespace std;
int chtoi(char s[])
{
    int n = 0, i;
    for (int i = 0; s[i] != '\0'; i++)
    {
        n = n * 10 + (s[i] - '0');
    }
    return n;
}
int main()
{
    char s[] = "34578";
    int z;
    z = chtoi(s);
    cout << z;
    return 0;
}