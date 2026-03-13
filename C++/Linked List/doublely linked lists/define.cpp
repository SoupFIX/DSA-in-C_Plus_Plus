#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *pre;
};
class doubly_list
{
public:
    node *head = NULL;
    void dLL(int val)
    {
        node *new_node = new node();
        new_node->data = val;
        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
            new_node->pre = NULL;
        }
        else
        {
            new_node->next = head;
            head->pre = new_node;
            head = new_node;
        }
    }
    void print()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->data << " ";
            t = t->next;
        }
        cout << t->pre;
    }
};
int main()
{
    doubly_list d;
    d.dLL(5);
    d.dLL(6);
    d.dLL(7);
    d.dLL(8);
    d.print();
    return 0;
}
