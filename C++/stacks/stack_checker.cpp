#include <iostream>
using namespace std;
#define MAX 6
class stack
{
private:
    int top;
    int arr[MAX];

public:
    stack()
    {
        top = -1;
    }
    void push(int n)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack is full!\nstack overflow error!";
            return;
        }
        arr[++top] = n;
    }
    void display()
    {
        while (top >= 0)
        {
            cout << arr[top] << " ";
            top--;
        }
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack is empty!\nstack underflow error!";
            exit(0);
        }
        return arr[top--];
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is empty!";
        }
        return arr[top];
    }
    bool check_full()
    {
        if (top < 0)
        {
            return 0;
        }
        if (top >= MAX - 1)
        {
            return 1;
        }
        return 0;
    }
};
int main()
{
    stack s;
    cout << "Create a stack and perform the following operations ";
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(78);
    s.push(8);
    s.display();
    if (s.check_full())
    {
        cout << "Stack is full!";
    }
    else
    {
        cout << "Stack is not full";
    }
    return 0;
}