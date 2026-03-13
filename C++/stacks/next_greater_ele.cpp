#include <iostream>
#include "stacks.h"
#include <stack>
#include <vector>
using namespace std;
vector<int> next_greater(vector<int> ar, int size)
{
    vector<int> ans(size);
    stack<int> container;
    for (int i = size - 1; i >= 0; i--)
    {
        while (container.size() > 0 && ar[i] >= container.top())
        {
            container.pop();
        }
        if (container.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = container.top();
        }
        container.push(ar[i]);
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    vector<int> s(size);
    for (int &i : s)
    {
        cout << "Enter the number : ";
        cin >> i;
    }
    s = next_greater(s, size);
    for (int &j : s)
    {
        cout << j << " ";
    }
    return 0;
}