#include <iostream>
using namespace std;
#define MAX 10
int a[MAX];
int top = -1;
void push(int ele)
{
    if (top == ((MAX)-1))
    {
        cout << "Stack is full!";
    }
    a[++top] = ele;
}
void pop()
{
    if (top == -1)
    {
        cout << "STACK IS ALREADY EMPTY!";
    }
    top--;
}
void print()
{
    for (int i = 0; i <= top; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    push(2);
    push(4);
    push(5);
    push(6);
}