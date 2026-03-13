#include <iostream>
using namespace std;
struct node
{
    int i;
    node(int data)
    {
        data = i;
        node *next;
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

    void push_front(int v)
    {
        node *new_node = new node(v);
        if (head == NULL)
            head = tail = new_node;
        else
            new_node->next = head;
        new_node = head;
    }
};

int main()
{
}