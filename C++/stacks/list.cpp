#include <iostream>
#include <list>
using namespace std;
void print(list<int> s)
{
    for (int i : s)
    {
        cout << i << "\t";
    }
}
int main()
{
    list<int> s;
    s.push_front(23);
    s.push_front(3);
    s.push_front(33);
    print(s);
    s.pop_front();
    print(s);
    // assigns 3 terms with 22
    s.assign(3, 22);
    cout << endl;
    print(s);
    // return last element inserted
    cout << s.back();
    cout << endl;
    s.clear();
    print(s);
    s.emplace_back(2, 12);
    s.~list();
}