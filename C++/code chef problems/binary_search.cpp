#include <iostream>
#include <vector>
using namespace std;
int search(int target, int n, vector<int> a)
{
    int start = 0, end = n - 1, mid = 0;
    while (start != end)
    {
        mid = (start + end) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            end = mid;
        }
        else if (a[mid] < target)
        {
            start = mid;
        }
    }
    return mid;
}
int main()
{
    vector<int> a;
    int n, m;
    cout << "Enter the size of the vector: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number : ";
        cin >> m;
        a.push_back(m);
    }
    int target;
    cout << "Enter the target : ";
    cin >> target;
    int result = 0;
    result = search(target, n, a);
    cout << "The target " << target << "is on the index :" << result;
    return 0;
}