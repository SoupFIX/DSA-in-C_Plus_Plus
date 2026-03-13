#include <iostream>
using namespace std;
int *insert(int *ar, int len, int num, int pos)
{
    int i = 0;
    for (int i = len - 2; i >= pos - 1; i--)
    {
        ar[i + 1] = ar[i];
    }
    ar[pos - 1] = num;
    return ar;
}
int main()
{
    int ar[5] = {2, 4, 8, 9}, res[5], num, pos, len = sizeof(ar) / sizeof(ar[0]);
    cout << len << endl
         << ar[0];
    cout << "Before insertion : ";
    for (int j = 0; j < len - 1; j++)
    {
        cout << ar[j] << " ";
    }

    int *p = insert(ar, len, 10, 2);
    cout << "\nAfter insertion : ";
    for (int j = 0; j < len; j++)
    {
        cout << p[j] << " ";
    }
    return 0;
}