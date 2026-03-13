// c++ standard preprocessor directive
//  A program to perform all basic operations to a singly
//  linked list. push_front,push_back,pop_front,pop_back
//  insert into the middle of the list
// LL stands for Linked List
#include <iostream>
using namespace std;
// creating a class named node
class node
{
public:
    int data;
    // pointer named next is a class of type node
    node *next;
    // constructor
    node(int val)
    { // data is the variable which is storing the actual values of the linked list
        data = val;
    }
};
// class to execute the operations on list
class list
{
    node *head;
    node *tail;
    node *start;

public:
    // constructor
    list()
    { // alaways initializing the head and tail to NUll
        head = tail = NULL;
    }
    // function definantion to push elements to the front of a LL
    void push_front(int val)
    {
        // creating a new node
        node *new_node = new node(val);
        if (head == NULL)
            head = tail = new_node;
        else
            new_node->next = head;
        head = new_node;
        return;
    }
    // function to print the elements of the LL
    void printLL()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->data << " ";
            t = t->next;
        }
    }
    // function to insert value at any position of the LL
    void insert(int val, int pos)
    {
        if (pos < 0)
            cout << "invalid position:";
        return;
        if (pos == 0)
            push_front(val);
        node *way = head;
        for (int i = 0; i < pos - 1; i++)
        {
            way = way->next;
        }
        // creating a new node
        node *new_Node = new node(val);
        new_Node->next = way->next;
        way->next = new_Node;
    }
    // function to pop out elements from the back of the LL
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "list is already empty!";
            return;
        }
        else
        {
            node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            temp = tail;
        }
    }
    // function to pop out elements from the front of a LL
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty!";
            return;
        }
        else
        {
            node *start = head;
            head = head->next;
            start->next = NULL;
            delete start;
        }
    }
};
// driver code
int main()
{ // creating a object for using list
    list l;
    // calling public members from list to create the linked lists
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    cout << "List before Pop : ";
    // printing the list
    l.printLL();
    l.pop_back();
    cout << "\nList After Pop : ";
    l.printLL();
    return 0;
}