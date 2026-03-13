#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
void insert_element(int n)
{ // creating a new node
    struct node *new_node = new node;
    new_node->data = n;
    new_node->next = head;
    head = new_node;
}
void printLL()
{
    struct node *t;
    t = head;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
};
int main()
{
    int val, res;
    // constructor needed to be defined inside the structure before creating the new node.
    insert_element(3);
    insert_element(4);
    insert_element(5);
    insert_element(6);
    insert_element(7);
    insert_element(8);
    printLL();
    return 0;
}