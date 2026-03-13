#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    node *next;
    int data;
};
node *top = NULL;
// class stack which contains all the stack functions
class stacks
{
public:
    // function to push elements to the stack
    void push(int val)
    {
        node *nd = (node *)malloc(sizeof(node));
        nd->data = val;
        if (top == NULL)
        {
            top = nd;
            nd->next = NULL;
        }
        else
        {
            nd->next = top;
            top = nd;
        }
    }
    // function to peek means to look at the top element of the stack
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty!";
        }
        return top->data;
    }
    // function to pop out the top element from the stack
    int pop()
    {
        // error handling
        if (top == NULL)
        {
            cout << "The stack is already empty !";
        }
        node *t = top;
        top = t->next;
        free(t);
        return t->data;
    }
    // function to display all the elements in the stack
    void display()
    {
        if (top == NULL)
        {
            cout << "No elements to be displayed!\nstack is empty!";
        }
        node *t = top;
        while (t != NULL)
        {
            cout << t->data << " ";
            t = t->next;
        }
        cout << endl;
    }
};
int main()
{
    stacks s;
    int input;
    cout << "Welcome to the stack simulator using linked lists:\n";
    while (true)
    {
        cout << "1: Push element to the stack:\n2: Pop element from the stack:\n3: Returns the top of the element!\n";
        cout << "4: Displays the elements of the stack \n";
        cout << "Enter the choice : ";
        cin >> input;
        switch (input)
        {
        case 1:
            int x;
            cout << "Enter the element which is to be pushed to the stack : ";
            cin >> x;
            s.push(x);
            break;
        case 2:
            cout << "The element poped is : " << s.pop() << endl;
            break;
        case 3:
            cout << "The top element is :" << s.peek() << endl;
            break;
        case 4:
            s.display();
            break;
        default:
            cout << "Error wrong input from the user side!\nPlease try again\n";
            exit(1);
        }
    }
    return 0;
}