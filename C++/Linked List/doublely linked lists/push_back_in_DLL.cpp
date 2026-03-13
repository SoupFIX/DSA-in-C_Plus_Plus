#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *pre;
};
node *head = NULL;
void push_front(int val)
{
    node *new_node = new node();
    new_node->pre = NULL;
    if (head == NULL)
    {
        new_node->data = val;
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        new_node->data = val;
        new_node->next = head;
        head->pre = new_node;
        head = new_node;
    }
}
void push_back(int val)
{
    node *n = new node();
    // if (head == NULL)
    // {
    //     n->pre = NULL;
    //     head = n;
    //     return;
    // }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    n->data = val;
    curr->next = n;
    n->pre = curr;
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
int main()
{
    push_front(6);
    push_front(5);
    push_front(4);
    push_front(3);
    push_front(2);
    push_back(22);
    printLL();
    return 0;
}