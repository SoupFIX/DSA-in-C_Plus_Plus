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
// function to check if the list is empty or not
bool empty()
{
    if (head == NULL)
    {
        return true;
    }
    return false;
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
node *insert_at(int pos, int num)
{
    node *next = NULL;
    node *newNode = new node();
    newNode->data = num;
    node *curr = head;
    if (pos == 1)
    {
        curr = newNode;
        newNode->next = head;
        head = newNode;
        return newNode;
    }
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "position out of range!";
        return NULL;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return newNode;
}
int main()
{
    node *newN = new node();
    push_front(3);
    push_front(4);
    push_front(5);
    push_front(6);
    print();
    int num, pos;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Enter the position : ";
    cin >> pos;
    newN = insert_at(pos, num);
    node *t = newN;
    print();
    return 0;
}