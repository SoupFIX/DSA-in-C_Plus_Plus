#include <iostream>
#include <queue>
using namespace std;
class stack
{
public:
    std ::queue<int> q1;
    std ::queue<int> q2;
    void push(int x)
    {
        if (q1.empty())
        {
            q1.push(x);
        }
        else
        {
            while (!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(x);
            while (!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
    }
    int top()
    {
        return q1.front();
    }
    int pop()
    {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    void display()
    {
        while (!q1.empty())
        {
            cout << q1.front() << endl;
            q1.pop();
        }
    }
};
int main()
{
    stack s;
    s.push(12);
    s.push(2);
    s.push(122);
    s.push(45);
    s.display();
}