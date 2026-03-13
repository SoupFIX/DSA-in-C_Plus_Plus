#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a = "SOUPTIK", b = "MITRA";
    // for concatenating
    // a.append(b, 1);
    // for copying
    // a = b;
    cout << a << endl;
    cout << b << endl;
    b = a;
    cout << a.length() << endl;
    cout << b;
    return 0;
}