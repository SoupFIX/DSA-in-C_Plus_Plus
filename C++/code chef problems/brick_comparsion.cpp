#include <bits/stdc++.h>
using namespace std;
int no_of_the_brick(int A[], int N)
{
    int i = 2, brick = 1, hold = 0;
    hold = A[1];
    while (i <= N)
    {
        if (hold == A[i])
        {
            hold = hold;
            brick = brick;
        }
        else if (hold < A[i])
        {
            hold = A[i];
            brick = i;
        }
        else if (hold > A[i + 1])
        {
            hold = hold;
            brick = brick;
        }
        i++;
    }
    return brick;
}
int main()
{
    int T, N, i, j, result = 0;
    int A[101];
    cout << "Enter the test  :";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Enter the number :";
        cin >> N;
        for (int j = 1; j <= N; j++)
        {
            cout << "Enter the element : ";
            cin >> A[j];
        }
        result = no_of_the_brick(A, N);
        cout << result << endl;
    }
    return 0;
}