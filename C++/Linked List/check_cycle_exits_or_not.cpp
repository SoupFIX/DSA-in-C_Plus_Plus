#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(double val)
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
    void push_front(double val)
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
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    double count()
    {
        double count = 0;
        node *start = head;
        while (start != NULL)
        {
            count++;
            start = start->next;
        }
        return count;
    }
    bool is_cycle(node *point)
    {
        node *slow = head;
        node *fast = head;
        while (fast != NULL && fast->next != NULL)
            slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    list l;
    bool result;
    l.push_front(12);
    l.push_front(22);
    l.push_front(32);
    l.push_front(52);
    l.push_front(62);
    l.printLL();
    if (l.is_cycle())
    {
        
    }
    cout << result;
}