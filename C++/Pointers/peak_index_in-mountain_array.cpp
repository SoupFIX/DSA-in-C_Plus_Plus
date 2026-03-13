#include <iostream>
#include <vector>
using namespace std;
int search_peak_index(vector<int> &arr, int n)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid > 0 && arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            return mid;
        if (arr[mid - 1] < arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int n, ans = 0;
    cout << "enter the size of the array : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element : ";
        cin >> arr[i];
    }
    ans = search_peak_index(arr, n);
    cout << ans;
    return 0;
}