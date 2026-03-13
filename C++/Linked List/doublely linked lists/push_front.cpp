#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *pre;
};
node *head = NULL;
node *tail = NULL;
void push_front(int v)
{
    node *nd = new node;
    nd->data = v;
    nd->next = NULL;
    nd->pre = NULL;
    if (head == NULL)
    {
        head = tail = nd;
    }
    else
    {
        nd->next = head;
        head->pre = nd;
        head = nd;
    }
}
void print()
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->data << "\t";
        t = t->next;
    }
}
int main()
{
    push_front(3);
    push_front(4);
    push_front(5);
    push_front(6);
    print();
    return 0;
}