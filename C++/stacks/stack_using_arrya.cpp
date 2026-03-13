#include <iostream>
using namespace std;
// pass top by reference
bool empty(int *arr, int top)
{
    if (top == -1)
    {
        return true;
    }
    return false;
}
void push(int *arr, int n, int &top)
{
    top++;
    arr[top] = n;
}
// pass by reference
int tp(int *arr, int &top)
{
    return arr[top--];
}
void pop(int *arr, int &top, int n)
{
    arr[top--] = 0;
}
// driver code
int main()
{
    int arr[6], n, top = -1;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter element : ";
        cin >> n;
        push(arr, n, top);
    }
    pop(arr, top, n);
    cout << "The elements of the stack are : \n";
    for (int i = 0; i < 6; i++)
    {
        int x = tp(arr, top);
        cout << x << "\t";
    }
    if (empty(arr, top))
    {
        cout << "stack is empty";
    }
    else
    {
        cout << "stack is not empty!";
    }
    return 0;
}