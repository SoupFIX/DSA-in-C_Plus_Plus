#include <iostream>
using namespace std;
void (*foo)(int)
{
    int x = 45;
    cout << x;
}
int main()
{
    int *x, a = 74;
    x = &a;
    int **prt = &x;
    cout << x << endl;
    cout << *x << endl; // pointing to value at a
    cout << &x << endl;
    cout << prt << endl;
    cout << *prt << endl;
    cout << **prt << endl;
    return 0;
}