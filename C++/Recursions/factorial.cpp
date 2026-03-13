#include <iostream>
using namespace std;
int factorial(int n)
{
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}
int main()
{
  int n, result = 0, fact = 1;
  cout << "enter the number : ";
  cin >> n;
  result = factorial(n);
  cout << result;
  return 0;
}