#include <iostream>
#include <time.h>
#include <vector>
#include <array>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main()
{
    int f = 21;
    float d = 23;
    double s = 2;
    string e = "soije";
    char q = 'r';
    bool a = "true";
    time_t now;
    vector<int> x;
    unordered_map<int, char> z;
    unordered_set<int> u;
    cout << "size of integer : " << sizeof(f) << endl;
    cout << "size of float : " << sizeof(d) << endl;
    cout << "size of double : " << sizeof(s) << endl;
    cout << "size of string : " << sizeof(e) << endl;
    cout << "size of char : " << sizeof(q) << endl;
    cout << "size of bool : " << sizeof(a) << endl;
    cout << "size of time : " << sizeof(now) << endl;
    cout << "size of vector : " << x.size() << endl;
    cout << "size of map : " << sizeof(z) << endl;
    cout << "size of set : " << sizeof(u) << endl;
    return 0;
}