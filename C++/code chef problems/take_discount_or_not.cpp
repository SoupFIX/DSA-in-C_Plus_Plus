#include <iostream>
using namespace std;
int find_amount_after_buying_coupon(int N, int X, int Y, int A[])
{
    int total_price_with_discount = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= Y)
        {
            A[i] = 0;
            total_price_with_discount += A[i];
        }
        else
        {
            A[i] = A[i] - Y;
            total_price_with_discount += A[i];
        }
    }
    return (total_price_with_discount + X);
}
// function to calculate the total price of all the items without buying coupon
int find_original_amount(int A[], int N, int Y)
{
    int total_price_without_coupon = 0;
    for (int k = 0; k < N; k++)
    {
        total_price_without_coupon += A[k];
    }
    return total_price_without_coupon;
}
int main()
{ // T is the number of test cases
    // N is the number of items to be shopped
    // X is the price of a discount coupon
    // Y is the amount of  price of every item which will be reduced after buying coupon
    // if price of aan item <=Y
    int T, N, X, Y, A[10000], amount_before_discount = 0, amount_after_discount = 0;
    cout << "enter the number of test cases : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "enter the number of items : ";
        cin >> N;
        cout << "enter the price of the discount coupon : ";
        cin >> X;
        cout << "enter the amount of price which will be reduced from each item : \n";
        cin >> Y;
        for (int j = 0; j < N; j++)
        {
            cout << "enter the price of item : ";
            cin >> A[j];
        }
        amount_before_discount = find_original_amount(A, N, Y);
        amount_after_discount = find_amount_after_buying_coupon(N, X, Y, A);
        if (amount_before_discount > amount_after_discount)
        {
            cout << "COUPON" << endl;
        }
        if (amount_before_discount == amount_after_discount)
        {
            cout << "NO COUPON" << endl;
        }
        else
        {
            cout << "NO COUPON" << endl;
        }
    }
    return 0;
}