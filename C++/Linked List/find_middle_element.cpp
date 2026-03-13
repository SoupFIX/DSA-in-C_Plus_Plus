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
    }
};
class list
{
    node *head;
    node *tail;

public:
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
    int count()
    {
        int count = 0;
        node *start = head;
        while (start != NULL)
        {
            count++;
            start = start->next;
        }
        return count;
    }
    // function to find the middle element
    void middle_element()
    {
        node *start = head;
        int nodes = count();
        // finding the middle index
        int mid = nodes / 2;
        for (int c = 0; c < mid; c++)
        { // updating start to point to the node of the middle element
            start = start->next;
        }
        cout << "The middle element is :" << start->data;
    }
};
int main()
{
    list l;
    l.push_front(21);
    l.push_front(25);
    l.push_front(23);
    l.push_front(22);
    l.push_front(27);
    l.printLL();
    l.middle_element();
    return 0;
}