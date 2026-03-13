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
    new_node->next = head;
    head = new_node;
    tail->next = head;
}
