#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;
void push(int val, list<int> l)
{
    l.push_front(val);
}
void del(list<int> l)
{
    l.pop_front();
}
int top(list<int> l)
{
    return l.front();
}
int main()
{
    list<int> l;
    push(78, l);
    push(38, l);
    push(48, l);
    push(58, l);
    return 0;
}