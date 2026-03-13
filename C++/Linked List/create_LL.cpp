#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int i)
    {
        data = i;
    }
};
class list
{
    node *head;
    node *tail;

public:
    list()
    {
        head = tail = NULL;
        node *new_node = new node()
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
        node *t;
        t = head;
        while (t != NULL)
        {
            cout << t->data << " ";
            t = t->next;
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
    l.push_front(5);
    l.printLL();
    return 0;
}