// This C++ program is written to show the implementation of stack using array
// The functions used here are push,pop,peek(top),display,empty.
#include <iostream>
using namespace std;
// declaring the size of the stack
#define MAX 100
// class of stack data structure
class stack
{
    // private members can be accessed within the class
private:
    int top;
    int arr[MAX];

public:
    // defining a constructor
    stack()
    {
        top = -1;
    }
    // function to push elements on to the stack
    void push(int x)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack overflow!!\n";
            return;
        }
        // insert the element in the array
        // and update the pop value
        arr[++top] = x;
    }
    // function to pop out the topmost element from the stack
    int pop()
    { // condition if stack is empty
        if (top < 0)
        {
            cout << "stack underflow!\n";
            return -1;
        }
        // pop elements from the stack and update the pop
        return arr[top--];
    }
    // function to get the top most element form the stack
    int peek()
    { // if stackis empty
        if (top < 0)
        {
            cout << "Stack is empty!\n";
        }
        // return the current top element
        return arr[top];
    }
    bool empty()
    {
        if (top < 0)
        {
            return true;
        }
        return false;
    }
    // function to display all the elements from the stack
    void display()
    {
        if (top < 0)
        {
            cout << "Stack is empty!\n";
        }
        else
        {
            cout << "The elements of the stack are : \n";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }
};
int main()
{
    stack s;
    cout << "Welcome to the stack simulator:\n";
    cout << "1:Push to the stack\n";
    cout << "2:Pop from the stack\n";
    cout << "3:Peek to the stack\n";
    cout << "4:Display the elements of the stack \n";
    cout << "5:Check if the stack is empty or not \n";
    int x;
    while (true)
    {
        cout << "Enter your choice : \n";
        cin >> x;
        switch (x)
        {
        case 1:
            int n;
            cout << "enter the number : \n";
            cin >> n;
            s.push(n);
            break;
        case 2:
            cout << s.pop() << endl;
            break;
        case 3:
            cout << "The top element is : \n"
                 << s.peek();
            break;
        case 4:
            s.display();
            break;
        case 5:
            if (s.empty())
            {
                cout << "Stack is empty!\n";
                break;
            }
            else
            {
                cout << "Stack is not empty\n";
                break;
            }
        case 6:
            exit(1);
        }
    }
    return 0;
}