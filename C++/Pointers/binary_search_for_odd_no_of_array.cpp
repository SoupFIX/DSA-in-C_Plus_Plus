#include <iostream>
using namespace std;
int binary_search(int arr[], int target, int start, int end, int i)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 10}, n = sizeof(arr) / sizeof(arr[0]);
    int target = 0, start = 0, end = n - 1, result, i;
    result = binary_search(arr, target, start, end, i);
    cout << result;
    return 0;
}