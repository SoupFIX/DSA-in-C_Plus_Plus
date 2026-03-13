#include <iostream>
using namespace std;
void change(int &u)
{
    u = 10;
}
int main()
{
    int a = 10;
    change(a);
    cout << a;
}