#include <iostream>
using namespace std;
double binary_search(double arr[], double start, double end, double target)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (target > arr[mid])
        {
            return binary_search(arr, mid + 1, end, target);
        }
        else if (target < arr[mid])
        {
            return binary_search(arr, start, mid - 1, target);
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
    double arr[] = {4, -3, 8, 7, 16, 1}, n = sizeof(arr) / sizeof(arr[0]), start = 0, end = n - 1;
    double target = -3, result;
    result = binary_search(arr, start, end, target);
    cout << result;
    return 0;
}