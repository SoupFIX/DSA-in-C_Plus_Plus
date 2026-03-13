#include <iostream>
using namespace std;
int add(int a)
{
    return a + 1;
}
int main()
{
    int a = 3, result = 0;
    result = add(a);
    cout << result;
    return 0;
}