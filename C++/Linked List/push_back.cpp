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
    if (tail == NULL)
    {
        tail = new_node;
    }
    new_node->next = head;
    head = new_node;
}
void push_back(int val)
{
    node *new_N = new node();
    new_N->data = val;
    new_N->next = NULL;
    if (head == NULL)
    {
        head = new_N;
    }
    else
    {
        tail->next = new_N;
        tail = new_N;
    }
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
    push_front(8);
    push_front(7);
    push_front(6);
    push_front(5);
    push_front(3);
    cout << "before pushing back element : ";
    print();
    cout << "After pushing back element : ";
    push_back(51);
    print();
    return 0;
}