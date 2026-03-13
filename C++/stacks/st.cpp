#include <iostream>
#include "stacks.h"
using namespace std;
int ar[10];
int main()
{
    push(34);
    push(4);
    push(54);
    push(74);
    cout << pop() << "\n";
    cout << pop() << "\n";
    display();
    return 0;
}