#include <iostream>
#include <list>
using namespace std;
list<int> l;
class linked_list
{
public:
    void push(int v)
    {
        l.push_front(v);
    }
    void pop()
    {
        l.pop_front();
    }
    int top()
    {
        return l.front();
    }
    void assigns()
    {
        l.assign(4, 100);
    }
};
int main()
{
    linked_list l1;
    l1.push(12);
}