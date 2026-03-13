#include <iostream>
using namespace std;
int T, X, Y, W = 0;
int find_highest(int high_lead[], int T)
{
    int m = 0;
    for (int k = 0; k < T; k++)
    {
        m = max(m, high_lead[k]);
    }
    return m;
}
int check_winner(int X, int Y)
{
    if (X > Y)
        return 1;
    return 2;
}
int main()
{
    // T is the number of test cases.
    // X is the score of player 1.
    // Y is the score of player 2.
    // W is the winner of the game.
    int highest[100], high_lead = 0;
    cout << "enter the number of test case : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "enter score of player 1 : ";
        cin >> X;
        cout << "enter score of player 2 : ";
        cin >> Y;
        W = check_winner(X, Y);
        cout << W << " ";
    }
    for (int j = 0; j < T; j++)
    {
        highest[j] = max(X, Y) - min(X, Y);
    }
    int h = find_highest(highest, T);
    cout << " \n " << h;
    return 0;
}