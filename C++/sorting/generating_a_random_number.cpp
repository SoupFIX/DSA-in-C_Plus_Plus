#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
int count_1s(int n, int count_1, int i)
{
    for (i; i < n; i++)
    {
        srand(time(0));
        int random_num = rand() % 2;
        if (random_num >= 0 && random_num <= 0.5)
        {
            count_1++;
            return count_1s(n, count_1, ++i);
        }
        else
        {
            return count_1s(n, count_1, ++i);
        }
    }

    return count_1;
}
int count_0s(int n, int count_0, int i)
{
    for (i; i < n; i++)
    {
        srand(time(0));
        int random_num = rand() % 2;

        if (random_num >= 0 && random_num <= 0.5)
        {
            count_0++;
            return count_0s(n, count_0, ++i);
        }
        else
        {
            return count_0s(n, count_0, ++i);
        }
    }

    return count_0;
}
int main()
{
    int n, result1 = 0, result2 = 0, count_0 = 0, count_1 = 0;
    cout << "enter the number of times to run : ";
    cin >> n;
    result1 = count_0s(n, count_0, 0);
    result2 = count_1s(n, count_1, 0);
    cout << "the probability of the 0s in the random experiment is : "
         << result1 << "\n";
    cout << "the probability of the 0s in the random experiment is : " << result2;
    return 0;
}