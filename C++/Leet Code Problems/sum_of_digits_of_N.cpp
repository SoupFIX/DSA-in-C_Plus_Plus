#include <iostream>
#include <string>
using namespace std;
int count(string N)
{
    return N.length();
}
int sum_of_digits(string N)
{
    int digits = count(N), x = 0, y = 0, z = 0;
    int n = stoi(N), sum = 0;
    while (digits != 0)
    {
        x = n / 100;
        sum += x;
        digits--;
        n %= 100;
        y = n / 10;
        sum += y;
        digits--;
        n %= 100;
        z = n / 10;
        sum += z;
        digits--;
    }
    return sum;
}
int main()
{
    string N;
    int digits = 0, result = 0;
    cout << "enter the number : ";
    cin >> N;
    result = sum_of_digits(N);
    cout << result;
    return 0;
}