#include <iostream>
#include <stack>
#include <queue>
using namespace std;
queue<int> rearrange(queue<int> q, int half)
{
    stack<int> s1;
    stack<int> s2;
    int i = 1;
    while (i != half)
    {
        s1.push(q.front());
        q.pop();
        i++;
    }
    while (i != q.size())
    {
        s2.push(q.front());
        q.pop();
        i++;
    }
    queue<int> q1;
    queue<int> q2;
    while (!s1.empty())
    {
        q1.push(s1.top());
        s1.pop();
    }
    while (!s2.empty())
    {
        q2.push(s2.top());
        s2.pop();
    }
    while (!q1.empty())
    {
        s1.push(q1.front());
        q1.pop();
    }
    while (!q2.empty())
    {
        s2.push(q2.front());
        q2.pop();
    }
    queue<int> ans;
    int size1 = s1.size() / 2;
    int size2 = s2.size() / 2;
    int j = 1;
    while (j != size1)
    {
        ans.push(s1.top());
        s1.pop();
        j++;
    }
    int k = 1;
    while (k != size2)
    {
        ans.push(s2.top());
        s2.pop();
        k++;
    }
    ans.push(s1.top());
    s1.pop();
    ans.push(s2.top());
    s1.pop();
    return ans;
}
int main()
{
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(3);
    q.push(1);
    int half = q.size() / 2;
    q = rearrange(q, half);
    for (int i = 1; i <= q.size(); i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}