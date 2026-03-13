#include <bits/stdc++.h>
using namespace std;
int N, X, Y, result_lead = 0, m = 0, player = 0;
int main()
{
    // X is player 1.
    // Y is player 2.
    cout << " enter the size : ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "enter score of player 1 : ";
        cin >> X;
        cout << "enter score of player 2 : ";
        cin >> Y;
        result_lead = max(X, Y) - min(X, Y);
        m = max(m, result_lead);
        if (m)
        {
            player = 1;
        }
        else
        {
            player = 2;
        }
    }

    cout << player << " " << m;
    return 0;
}