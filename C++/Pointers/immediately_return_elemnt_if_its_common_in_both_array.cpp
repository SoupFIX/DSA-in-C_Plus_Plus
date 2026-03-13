// returning any element which is firstly found common in
// two arrays.
#include <iostream>
#include <vector>
using namespace std;
int is_found(vector<int> a, vector<int> b, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                return a[i];
            }
        }
    }
    return -1;
}
int main()
{
    int n, res;
    cout << "enter the size for both the arrays : ";
    cin >> n;
    vector<int> a(n);
    // input element for 1st array.
    for (int &i : a)
    {
        cout << "enter the element(for 1st array) : ";
        cin >> i;
    }
    vector<int> b(n);
    // input element for 2st array.
    for (int &i : b)
    {
        cout << "enter the element(for 2st array) : ";
        cin >> i;
    }
    res = is_found(a, b, n);
    cout << res;
    return 0;
}