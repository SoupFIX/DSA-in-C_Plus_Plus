#include <bits/stdc++.h>
using namespace std;
int no_of_candy_packs_required(int N, int X)
{
    int required = N - X;
    if (required <= 0)
        return 0;
    return (required + 3) / 4;
}

int main()
{
    int T, N, X, result = 0;
    cout << "enter the test cases : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "enter the number of children : ";
        cin >> N;
        cout << "enter the number of candies chef already has : ";
        cin >> X;
        result = no_of_candy_packs_required(N, X);
        cout << result << endl;
    }
    return 0;
}