#include <iostream>
using namespace std;
int no_of_steps_to_max(int A[], int N, int result)
{
    int count_steps = 0;
    if (N == 1)
    {
        return 0;
    }
    for (int j = 0; j < N; j++)
    {
        if (A[j] != result)
        {
            A[j] = result;
            count_steps++;
        }
        else
        {
            A[j] = result;
        }
    }
    return count_steps;
}
int find_min_no(int A[], int N)
{
    int less = A[0];
    for (int i = 0; i < N - 1; i++)
    {
        less = min(less, A[i + 1]);
    }
    return less;
}
int main()
{
    int T, N, A[100], result = 0, steps = 0;
    cout << "enter the number of test cases : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "enter the size of the array : ";
        cin >> N;
        for (int j = 0; j < N; j++)
        {
            cout << "enter the element: ";
            cin >> A[j];
        }
        result = find_min_no(A, N);
        steps = no_of_steps_to_max(A, N, result);
        cout << result << endl;
        cout << steps;
    }
    return 0;
}