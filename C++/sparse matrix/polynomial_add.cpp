#include <iostream>
using namespace std;
int *add_polynomials(int *a, int *b, int m, int n, int *c)
{
    int i, j;
    if (m > n)
    {
        c = (int *)malloc((m + 1) * sizeof(int));
        for (i = 0; i <= m; i++)
        {
            c[i] = a[i];
        }
        for (i = 0; i <= m; i++)
        {
            c[i] += b[i];
        }
        return c;
    }
    if (n > m)
    {
        c = (int *)malloc((n + 1) * sizeof(int));
        for (i = 0; i <= n; i++)
        {
            c[i] = a[i];
        }
        for (i = 0; i < n; i++)
        {
            c[i] += b[i];
        }
        return c;
    }
    c = (int *)malloc((n + 1) * sizeof(int));
    for (int j = 0; j <= n; j++)
    {
        c[j] = a[j];
    }
    for (j = 0; j <= n; j++)
    {
        c[i] += b[i];
    }
    return c;
}
int main()
{ // m= highest order of polynomial 1
    // n = highets order of polynomial 2
    // a is the array containing elements of polynomail 1
    // b is the array containing elements of polynomail 2
    // c is the array containing elements of sum of 1 and 2

    int *a, *b, *c, m, n;
    cout << "Enter the details of the two polynomials : \n";
    cout << "Enter the highest order of polynomial 1 : ";
    cin >> m;
    cout << "Enter the highest order of polynomial 2 : ";
    cin >> n;
    // k is the number of coefficients in polynomial 1
    int k;
    cout << "Enter the total number of coefficients in polynomial 1 : ";
    cin >> k;
    // pow is the order of the polynomail
    // coeff is the correspoing value of that order power
    int pow1, coeff1;
    a = (int *)malloc((k + 1) * sizeof(int));
    for (int i = 0; i <= m; i++)
    {
        cout << "Enter the power : ";
        cin >> pow1;
        cout << "Enter the coefficient : ";
        cin >> coeff1;
        a[pow1] = coeff1;
    }
    // l is the number of coefficients in the polynomial 2
    int l;
    cout << "Enter the total number of coefficients in polynomail 2 : ";
    cin >> l;
    // pow is the order of the polynomail
    // coeff is the correspoing value of that order power
    int pow2, coeff2;
    b = (int *)malloc((l + 1) * sizeof(int));
    for (int i = 0; i <= n; i++)
    {
        cout << "Enter the power : ";
        cin >> pow2;
        cout << "Enter the coefficient : ";
        cin >> coeff2;
        b[pow2] = coeff2;
    }
    for (int k = 0; k <= m; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;
    for (int k = 0; k <= n; k++)
    {
        cout << b[k] << " ";
    }
    c = add_polynomials(a, b, m, n, c);
    if (m > n)
    {
        for (int k = 0; k <= m; k++)
        {
            cout << c[k] << " ";
        }
    }
    else if (m < n)
    {
        for (int k = 0; k <= n; k++)
        {
            cout << c[k] << " ";
        }
    }
    else
    {
        for (int k = 0; k <= n; k++)
        {
            cout << c[k] << " ";
        }
    }
    free(c);
    return 0;
}