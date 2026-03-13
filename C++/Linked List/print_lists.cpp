#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class list
{
public:
    node *head;
    node *tail;
    list()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
            head = tail = new_node;
        else
            new_node->next = head;
        head = new_node;
        return;
    }
    void printLL()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    list l;
    l.push_front(23);
    l.push_front(245);
    l.push_front(22);
    l.push_front(13);
    l.printLL();
    return 0;
}