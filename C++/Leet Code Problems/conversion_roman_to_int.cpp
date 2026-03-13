#include <iostream>
#include <unordered_map>
using namespace std;
void convert_roman_int(unordered_map<int, string> num, string s)
{
    int n = num.size(), i = 0;
    for (auto &pair : num)
    {
        s[i] =
        cout << pair.first << pair.second << ;
    }
}
int main()
{
    unordered_map<int, string> num = {{1, "I"}, {5, "V"}, {10, "X"}, {50, "L"}, {100, "C"}, {500, "D"}, {1000, "M"}};
    string s;
    convert_roman_int(num, s);
}