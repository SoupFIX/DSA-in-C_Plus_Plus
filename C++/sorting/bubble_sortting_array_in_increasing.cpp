#include <iostream>
using namespace std;
int main()
{
    int arr[100000], temp = 0, size = 0;
    cout << "enter the size : ";
    cin >> size;
    for (int k = 0; k < size; k++)
    {
        cout << "enter the element : ";
        cin >> arr[k];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}