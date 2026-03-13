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
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}
void reverse()
{
    node *curr = head;
    node *pre = NULL;
    node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    head = pre;
}
void print()
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->data << " ";
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
    cout << "\n";
    reverse();
    print();
    return 0;
}