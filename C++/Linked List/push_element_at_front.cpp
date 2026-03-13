#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *head = NULL;
void push_front(int val)
{
    struct node *new_node = new node();
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}
void printLL()
{
    node *t;
    t = head;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
}
int main()
{
    push_front(3);
    push_front(4);
    push_front(5);
    push_front(6);
    push_front(7);
    printLL();
    return 0;
}