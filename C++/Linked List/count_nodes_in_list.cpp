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
};
int main()
{
    list l;
    double count;
    double n, i, data;
    cout << "enter the number of nodes to be entered :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter data : ";
        cin >> data;
        l.push_front(data);
    } // to print the list
    l.printLL();
    count = l.count();
    cout << "\nThe number of nodes are : " << count;
    return 0;
}