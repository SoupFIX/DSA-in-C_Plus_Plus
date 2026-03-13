#include <iostream>
using namespace std;
void print(int arr[], int n)
{  int *p = arr;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int ar[] = {2, 5, 8, 12, 16, 23, 4, 1}, n = sizeof(ar) / sizeof(ar[0]);
    int target;
    cout << "enter the target : ";
    cin >> target;
    print(ar, n);
}