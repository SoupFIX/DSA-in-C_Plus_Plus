#include <iostream>
using namespace std;
int *del(int *ar, int len, int pos)
{
    for (int i = pos - 1; i < len; i++)
    {
        ar[i] = ar[i + 1];
    }
    return ar;
}
int main()
{
    int ar[] = {2, 4, 8, 9};
    int len = sizeof(ar) / sizeof(ar[0]);
    cout << "Array before deletion : ";
    for (int i = 0; i < len; i++)
    {
        cout << ar[i] << " ";
    }
    int *res = del(ar, len, 2);
    cout << "\nArra after deletion : ";
    for (int j = 0; j < len - 1; j++)
    {
        cout << res[j] << " ";
    }
    return 0;
}