#include <iostream>
#include <vector>
#include <list>
using namespace std;
void push(int val, vector<int> a)
{
    a.push_back(val);
}
void pope(vector<int> a)
{
    return a.pop_back();
}
int top(vector<int> a)
{
    return a.size() - 1;
}
bool empty(vector<int> a)
{
    return a.size() == 0;
}
void print(vector<int> a)
{
    for (int &i : a)
    {
        cout << i;
    }
}
int main()
{
    vector<int> a;
    list<int> l;
    push(10, a);
    push(12, a);
    push(22, a);
    push(32, a);
    push(42, a);
    print(a);
}