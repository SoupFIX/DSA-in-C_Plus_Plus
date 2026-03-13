// The following c + + code consists of searching the index
// value of elements in a rotated sorted array
#include <iostream>
using namespace std;
// function to find the index value of the target which is searched
int search(int a[], int len, int target)
{
    int start = 0, end = len - 1, mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        // base case
        if (a[mid] == target)
            return mid;

        // left part is sorted
        else if (a[start] <= a[mid])
        {
            if (a[start] <= target && target <= a[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // right part is sorted
        else if (a[mid] <= target && target <= a[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    // return -1 if the element is not present in the array
    return -1;
}
// driver code
int main()
{
    int a[100], target, len, result = 0;
    cout << "enter the length of the array : ";
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter the integer : ";
        cin >> a[i];
    }
    cout << "Enter the target element : ";
    cin >> target;
    // string the index of the target in result
    result = search(a, len, target);
    cout << "Your array is : " << "[";
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]\nThe index of " << target << " is " << result;
    return 0;
}