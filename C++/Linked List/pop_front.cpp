#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
    }
};
class list
{
    node *head;
    node *tail;
    node *start;

public:
    list()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
            head = tail = new_node;
        else
            new_node->next = head;
        head = new_node;
        return;
    }
    void printLL()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->data << " ";
            t = t->next;
        }
    }
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
int main()
{
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    cout << "Linked List Before Pop : ";
    l.printLL();
    l.pop_front();
    cout << "\nLinked List After Pop : ";
    l.printLL();
    return 0;
}