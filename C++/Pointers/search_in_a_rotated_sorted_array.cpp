#include <iostream>
using namespace std;
int search(int arr[], int start, int end, int target)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[start] <= arr[mid])
        {
            if (arr[start <= target && target <= arr[mid]])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (arr[mid] <= target && target <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    // if element is not present in the array.
    return -1;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 0, 1, 2}, n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1, result, target = 1;
    result = search(arr, start, end, target);
    cout << result;
    return 0;
}