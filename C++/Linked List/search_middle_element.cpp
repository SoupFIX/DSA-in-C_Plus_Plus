#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void push(int val)
{
    node *new_node = new node();
    if (head == NULL)
    {
        new_node->data = val;
    }
    new_node->next = head;
    new_node->data = val;
    head = new_node;
}
int search(node *head, int n)
{
    node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    return curr->data;
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
int main()
{
    int n, m, result = 0;
    cout << "Enter the size of the list : ";
    cin >> n;

    while (n != 0)
    {
        cout << "Enter the element : ";
        cin >> m;
        push(m);
        n--;
    }
    result = search(head, n);
    cout << result << "\n";
    print();
    return 0;
}