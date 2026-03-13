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
void push_back(int v)
{
    node *nd = new node;
    nd->data = v;
    nd->next = NULL;
    nd->prev = NULL;
    if (head == NULL)
    {
        head = tail = nd;
    }
    tail->next = nd;
    nd->prev = tail;
    tail = nd;
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
    push_back(2);
    push_back(3);
    push_back(4);
    push_back(5);
    push_back(6);
    print();
    return 0;
}