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
    if (head == NULL)
    {
        head = new_node;
        new_node->data = val;
        new_node->next = NULL;
        return;
    }
    new_node->data = val;
    new_node->next = head;
    head->pre = new_node;
    head = new_node;
}
void pop_front()
{
    node *curr = head;
    head = head->next;
    if (head != NULL)
    {
        head->pre = NULL;
    }
    curr->next = NULL;
    delete curr;
}
void printLL()
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
    push_front(7);
    printLL();
    pop_front();
    cout << "\n";
    printLL();
    return 0;
}