#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> a;
int main()
{
    a v;
    v.push_back(12);
    v.push_back(2);
    v.push_back(22);
    v.push_back(1);
    cout << v.size();
    cout << "\n"
         << v.capacity() << "\n";
    v.pop_back();
    for (int i : v)
    {
        cout << i << "\n";
    }
    v.emplace_back(233);
    for (int i : v)
    {
        cout << "\n"
             << i << "\n";
    }
    return 0;
}