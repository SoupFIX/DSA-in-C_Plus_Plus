#include <iostream>
using namespace std;
int find_number_of_days_both_were_happy(int N, int A[], int B[])
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > B[i])
        {
            if (A[i] > (2 * B[i]))
            {
                count = 0;
            }
            else
            {
                count++;
            }
        }
        if (B[i] > A[i])
        {
            if (B[i] > (2 * A[i]))
            {
                count = 0;
            }
            else
            {
                count++;
            }
        }
        if (A[i] == B[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int T, N, A[100000], B[100000], result = 0;
    cout << "enter the number of test cases : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "enter the number of days : ";
        cin >> N;
        for (int j = 0; j < N; j++)
        {
            cout << "enter the distance runnned by Alice : ";
            cin >> A[i];
        }
        for (int k = 0; k < N; k++)
        {
            cout << "enter the distance runnned by Bob : ";
            cin >> A[k];
        }
        result = find_number_of_days_both_were_happy(N, A, B);
        cout << result;
    }
    return 0;
}