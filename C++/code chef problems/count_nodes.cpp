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
void print()
{
    int count = 0;
    node *t = head;
    while (t != NULL)
    {
        count++;
        t = t->next;
    }
    cout << count;
}
int main()
{
    push_front(4);
    push_front(3);
    push_front(2);
    print();
}