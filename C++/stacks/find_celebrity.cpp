#include <iostream>
#include <stack>
#include <stdlib.h>
using namespace std;
#define n 3
int celebrity(int mat[n][n])
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    int i = 0, j = 0;
    while (s.size() > 1)
    {
        i = s.top();
        s.pop();
        j = s.top();
        s.pop();
        if (mat[i][j] == 1)
        {
            s.push(j);
        }
        else
        {
            s.push(i);
        }
    }
    int cele = s.top();
    for (int j = 0; j < n; j++)
    {
        if (mat[cele][j] == 1)
        {
            return -1;
        }
    }
    return cele;
}
int main()
{
    stack<int> s;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the number : ";
            cin >> mat[i][j];
        }
    }
    int cele = celebrity(mat);
    cout << "The celebrity is : " << cele;
    return 0;
}