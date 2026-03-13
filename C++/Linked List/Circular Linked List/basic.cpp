#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL, *tail = NULL;
void push_front(int val)
{
    node *new_node = new node();
    new_node->data = val;
    if (head == NULL)
    {
        head = tail = new_node;
        tail->next = new_node;
    }
    new_node->next = head;
    head = new_node;
    tail->next = head;
}
void print()
{
    if (head == NULL)
        return;
    node *t = head->next;
    cout << head->data << " ";
    while (t != head)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << t->data << " ";
}
int main()
{
    push_front(4);
    push_front(5);
    push_front(6);
    push_front(7);
    print();
    return 0;
}
