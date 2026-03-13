#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
void push_element(int val)
{
    node *new_node = new node();
    new_node->data = val;
    new_node->next = head;
    head = new_node;
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
void push_at(int p, int val)
{
    int count = 1;
    node *curr = head;
    node *new_N = new node();
    new_N->data = val;
    if (p == 1)
    {
        new_N->next = head;
        head = new_N;
    }
    if (curr == NULL)
    {
        cout << "position out of range!";
        delete new_N;
    }
    while (curr != NULL && count < p - 1)
    {
        curr = curr->next;
        count++;
    }
    new_N->next = curr->next;
    curr->next = new_N;
}
int main()
{
    push_element(12);
    push_element(2);
    push_element(4);
    push_element(7);
    push_element(6);
    push_element(8);

    push_at(2, 34);
    print();
    return 0;
}