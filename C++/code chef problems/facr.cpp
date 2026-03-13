// find factorial of small positive integers
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{ // t is the number of test cases.
    // n is the number whose factorial is to be find
    int t, n, result = 1;
    cout << "Enter the number of test cases to be performed : ";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "enter the number : ";
        cin >> n;
        result = factorial(n);
        cout << "The factorial of " << n << " is " << result << "\n";
    }
    return 0;
