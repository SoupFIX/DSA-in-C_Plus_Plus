#include <iostream>
using namespace std;
int main()
{
    int ar[] = {1, 2, 3, 4};
    int *ptr1 = ar;
    int *ptr2 = ar + 6;
    cout << ptr2 << "\n";
    cout << ptr1 << "\n";
    cout << (ptr2 - ptr1);
    return 0;
}