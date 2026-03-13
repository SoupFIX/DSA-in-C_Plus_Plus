#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int i)
    {
        data = i;
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
        return;
    }
    void printLL()
    {
        node *t;
        t = head;
        while (t != NULL)
        {
            cout << t->data << " ";
            t = t->next;
        }
    }
    // val= value stored at that node
    // pos = position of that node i.e. index.
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
    void print_at_index(int pos)
    {
        node *current = head;
        int idx = 0;
        while (current != NULL)
        {
            if (idx == pos)
            {
                cout << "Element at index " << pos << " is: " << current->data << endl;
                return;
            }
            current = current->next;
            idx++;
        }
        cout << "Index out of bounds!" << endl;
    }
};
int main()
{
    
}