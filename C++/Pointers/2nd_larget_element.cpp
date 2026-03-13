#include <iostream>
using namespace std;
int main()
{
    int ar[10] = {5, 4, 56, 3}, lar = 0, i, small;
    int len = sizeof(ar) / sizeof(ar[0]), scnd_lar = 0;
    for (i = 0; i < len; i++)
    {
        if (ar[i] > lar)
            lar = max(ar[i], lar);
    }
    for (i = 0; i < len; i++)
    {
        if (ar[i] > small)
            small = min(small, ar[i]);
    }
    cout << "largest element is : " << lar << "\n";
    cout << "smallest element is : " << small << "\n";
    cout << "2nd largest element : " << scnd_lar;
    return 0;
}