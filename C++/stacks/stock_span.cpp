#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> calcspan(vector<int> stock, int size)
{
    stack<int> s;
    vector<int> ans(size, 0);
    for (int i = 0; i < size; i++)      
    {
        while (s.size() > 0 && stock[s.top()] <= stock[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = (i + 1);
        }
        else
        {
            ans[i] = (i - s.top());
        }
        s.push(i);
    }
    return ans;
}
int main()
{
    int size;
    vector<int> ans;
    cout << "enter the size of the vector : ";
    cin >> size;
    vector<int> stock(size);
    for (int &i : stock)
    {
        cout << "Enter the price : ";
        cin >> i;
    }
    ans = calcspan(stock, size);
    for (int i : ans)
    {
        cout << i << endl;
    }
    return 0;
}