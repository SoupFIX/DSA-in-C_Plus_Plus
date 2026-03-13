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
void remove_odds()
{
    node *curr = head;
    node *temp;
    node *pre = NULL;
    while (curr != NULL && curr->data % 2 != 0)
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
        if (curr->data % 2 != 0)
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
    push_front(3);
    push_front(4);
    push_front(5);
    push_front(6);
    push_front(7);
    push_front(9);
    remove_odds();
    printLL();
    // push_front(3);
    // push_front(3);
    // push_front(3);
}