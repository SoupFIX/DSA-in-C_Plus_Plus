#include <iostream>
using namespace std;
int binary_search(int arr[], int mid, int target, int len)
{
    int start = 0, end = len - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {-1, 0, 2, 4, 7, 12, 23}, len = sizeof(arr) / sizeof(arr[0]);
    int mid = 0, end = len - 1, target, result = 0;
    cout << "enter the target : ";
    cin >> target;
    result = binary_search(arr, mid, target, len);
    cout << result;
    return 0;
}