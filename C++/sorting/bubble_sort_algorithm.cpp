#include <iostream>
#include <string>
using namespace std;
int bubble_sort(int n[], int i)
{
    int x;
    x = n[i];
    n[i] = n[i + 1];
    n[i + 1] = x;
    return n[i];
}
int check(int n[], int len, int i)
{
    while (i != len)
    {
        if (n[i] > n[i + 1])
        {
            return bubble_sort(n, i);
        }
        else
        {
            i++;
            return check(n, len, i + 1);
        }
    }
}
int main()
{
    int n[] = {4, 7, 3, 1}, len = 0, i = 0;
    len = sizeof(n) / sizeof(n[0]);
    for (int x : n)
    {
        if (len == 0)
        {
            cout << "empty array";
        }
        else if (n[i] > n[i + 1])
        {
            x = check(n, len, 0);
            cout << x;
        }
        else
        {
            cout << x;
        }
    }
    return 0;
}