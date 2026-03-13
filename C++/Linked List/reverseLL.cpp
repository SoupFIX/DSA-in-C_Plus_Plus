#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
void push_front(int val)
{
    node *new_node = new node();
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}
void reverse_list()
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
        head = pre;
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
    push_front(5);
    push_front(4);
    push_front(6);
    push_front(7);
    push_front(8);
    cout << "ORIGINAL LIST : ";
    printLL();
    cout << "\nREVERSED LIST : ";
    reverse_list();
    printLL();
    return 0;
}