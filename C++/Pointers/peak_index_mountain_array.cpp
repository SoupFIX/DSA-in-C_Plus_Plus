#include <iostream>
#include <vector>
using namespace std;
int search_peak_index(vector<int> ar, int n)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid != 0 && ar[mid - 1] < ar[mid] && ar[mid] > ar[mid + 1])
        {
            return mid;
        }
        else if (ar[mid - 1] < ar[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, res;
    cout << "enter the size : ";
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter element : ";
        cin >> ar[i];
    }
    res = search_peak_index(ar, n);
    cout << res;
    return 0;
}