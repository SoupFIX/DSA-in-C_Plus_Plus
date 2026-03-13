#include <iostream>
using namespace std;
int sum_primes(int start, int end, int sum, int i)
{
    while (start != end + 1 && i < end)
    {

        if (start % i != 0)
        {
            sum += start;
            return sum_primes(start + 1, end, sum, i + 1);
        }
        return sum_primes(start + 1, end, sum, i + 1);
    }
    return sum;
}

int main()
{
    int start, end, sum = 0, i = 1;
    cout << "enter starting number : ";
    cin >> start;
    cout << "enter ending number : ";
    cin >> end;
    sum = sum_primes(start, end, sum, i);
    cout << sum;
}