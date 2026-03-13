#ifndef STACKS_H // If A_H has not been defined yet
#define STACKS_H // Define A_H now
#include <iostream>
using namespace std;
// --- Function Declarations ---
// This tells other files that a function named 'B' exists.
int top = -1;
int arr[100];
auto push(int x)
{
    if (top >= 99)
    {
        cout << "stack FULL";
    }
    arr[++top] = x;
}
auto pop()
{
    if (top < 0)
    {
        cout << "Stack is already empty!";
    }
    cout << "THE ELEMENT POPED IS : ";
    return arr[top--];
}
auto peek()
{
    if (top < 0)
    {
        cout << "Stack is already empty!";
    }
    cout << "THE element at the top is : ";
    return arr[top];
}
void display()
{
    cout << "The elements of the stack are : ";
    while (top >= 0)
    {
        cout << arr[top] << " ";
        top--;
    }
}
#endif // End of the include guard