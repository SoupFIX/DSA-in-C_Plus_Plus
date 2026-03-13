#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};
node *head = NULL;
node *pre = NULL;
void push_element(int val)
{
    node *new_node = new node();
    if (head == NULL)
    {
        new_node->data = val;
        head = new_node;
    }
    else
    {
        new_node->data = val;
        new_node->next = head;
        head->pre = new_node;
        head = new_node;
    }
}
void print()
{
    node *t;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
int main()
{
    int n, m;
    cout << "enter the size of the linked lists : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element to be inserted :  ";
        cin >> m;
        push_element(m);
    }
    print();
}