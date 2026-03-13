#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {};
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.data() << endl;
    cout << a.begin() << endl;
    cout << a.end() << endl;
    if (a.empty() == 1)
        cout << "empty";
    else
        cout << "not empty";
}