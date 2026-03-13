#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
node *head = NULL;
node *tail = NULL;
void push_front(int v)
{
    node *nd = new node;
    nd->data = v;
    nd->next = NULL;
    nd->prev = NULL;
    if (head == NULL)
    {
        head = tail = nd;
    }
    else
    {
        nd->next = head;
        head->prev = nd;
        head = nd;
    }
}
void del()
{
    head->next->prev = NULL;
    tail->prev = NULL;
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
    push_front(2);
    push_front(1);
    push_front(8);
    print();
    del();
    print();
    return 0;
}