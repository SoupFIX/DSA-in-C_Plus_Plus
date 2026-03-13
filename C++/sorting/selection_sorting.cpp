#include <iostream>
#include <vector>

using namespace std;
void selection_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}

template<typename T>
void print(const vector<T>& arr)
{
    // A range-based for loop is a cleaner way to iterate over containers.
    for (const T& element : arr) {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {4, 1, 3, 2, 5, 0}, len = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, len);
    print(arr, len);
}