#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, v;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value : ";
        cin >> v;
        m.push_back(v);
    }
    for (int i : m)
    {
        cout << i << "\t";
    }
    return 0;
}