#include <iostream>
#include <list>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head1 = NULL;
node *head2 = NULL;
node *merge(list<int> m, list<int> n)
{
    node *new_node = new node();
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = head2;
    return curr;
}
int main()
{
    list<int> m = {1, 2, 3};
    list<int> n = {4, 5};
    node *p = merge(m, n);
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
