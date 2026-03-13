#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> a;
    a.push_back(2);
    a.push_back(223);
    a.push_back(12);
    a.push_front(3);
    cout << a.front() << endl
         << a.back() << endl;
    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop_back();
    }
    return 0;
}