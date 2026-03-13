#include <iostream>
#include "stacks.h"
using namespace std;
int main()
{
    push("8");
    push(67);
    display();
    cout << "the top element is : " << peek();
    return 0;
}