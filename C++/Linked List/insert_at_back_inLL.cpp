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
void push_back(int val)
{
    node *new_N = new node();
    node *curr;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_N;
    new_N->data = val;
    new_N->next = NULL;
}
void print()
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
    push_front(2);
    push_front(4);
    push_front(5);
    push_front(6);
    push_back(10);
    push_back(10);
    push_back(10);
    push_back(10);
    print();
    return 0;
}