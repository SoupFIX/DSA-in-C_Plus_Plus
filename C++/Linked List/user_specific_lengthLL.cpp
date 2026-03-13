#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;

public:
    node(int val)
    {
        data = val;
    }
};
node *head = NULL;
void push_element(int val)
{
    node *new_node = new node(val);
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}
void remove_duplicates()
{
    node *curr = head;
    node *pre;
}
void print()
{
    node *t;
    t = head;
    while (t != NULL)
    {
        cout << t->data << " " << "-> ";
        t = t->next;
    }
    cout << "NULL";
}
int main()
{
    int s, n;
    cout << "Enter the size of the linked lists : ";
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter the element to be pushed : ";
        cin >> n;
        push_element(n);
    }
    print();
}