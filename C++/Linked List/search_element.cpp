#include <iostream>
using namespace std;
// creating a structure for list of type node
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void push_front(int val)
{
    node *new_node = new node();
    new_node->next = head;
    new_node->data = val;
    head = new_node;
}
int search(node *head, int target)
{
    node *curr = head;
    int count = 1;
    if (curr->data == target)
    {
        return count;
    }
    while (curr->next->data != target)
    {
        curr = curr->next;
        count++;
    }
    return count;
    if (curr->data != target)
    {
        return -1;
    }
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
    int index = 0, target;
    cout << "ENTER THE TARGET : ";
    cin >> target;
    push_front(3);
    push_front(4);
    push_front(5);
    push_front(6);
    index = search(head, target);
    cout << index << "\n";
    printLL();
    return 0;
}