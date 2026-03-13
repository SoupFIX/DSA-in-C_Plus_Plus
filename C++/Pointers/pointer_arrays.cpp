#include <iostream>
using namespace std;
// driver code
int main()
{
    int a[10] = {1, 2, 3, 4, 5};
    int *p = a;
    int *r = a + 3;
    cout << *r << "\n";
    // storing the 2nd element of a in q
    int *q = &a[0];
    // printing address of a(address of 1st element)
    cout << p << "\n";
    // printing address of a(address of 1st element)
    cout << &a << "\n";
    // printing address of p
    cout << &p << "\n";
    // printing address of a(address of 1st element)
    cout << a << "\n";
    // printing value pointing to the variable
    cout << *p << "\n";
    // printinr the address of a(address of 1st element)
    cout << q << "\n";
    return 0;
}