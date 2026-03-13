// insert a ndoe after a given value.
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int v)
    {
        data = v;
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
    }
    void push_front(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
            head = tail = new_node;
        else
            new_node->next = head;
        head = new_node;
    }
    void printLL()
    {
        node *n = head;
        while (n)
        {
            cout << n->data << " ";
            n = n->next;
        }
    }
    void insert(int val)
    {
        node *t = head;
        while (t->data != 5)
        {
            t = t->next;
        }
        t->data = val;
        cout << t->data << " ";
    }
};
int main()
{
    list l;
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    l.push_front(7);
    l.printLL();
    l.insert(78);
    l.printLL();
    return 0;
}