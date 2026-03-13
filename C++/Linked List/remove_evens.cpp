#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void push_front(int val)
{
    node *new_node = new node();
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}
void remove_evens()
{
    node *curr = head;
    node *pre, *temp;
    while (curr != NULL && curr->data % 2 == 0)
    {
        temp = curr;
        curr = curr->next;
        free(temp);
    }
    head = curr;
    pre = curr;
    if (curr)
        curr = curr->next;
    while (curr != NULL)
    {
        if (curr->data % 2 == 0)
        {
            temp = curr;
            pre->next = curr->next;
            curr = curr->next;
            free(temp);
        }
        else
        {
            pre = curr;
            curr = curr->next;
        }
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
}
int main()
{
    push_front(8);
    push_front(7);
    push_front(6);
    push_front(5);
    push_front(4);
    push_front(10);
    push_front(2);
    push_front(56);
    remove_evens();
    print();
    return 0;
}