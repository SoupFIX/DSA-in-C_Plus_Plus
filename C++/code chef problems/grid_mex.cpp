#include <iostream>
using namespace std;
int main()
{
    int T, N, A[900][900];
    cout << " Enter the number of test cases : ";
    cin >> T;
    for (int k = 0; k < T; k++)
    {
        cout << "Enter the number elements : ";
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << "Enter the element :";
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << A[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}