#include <iostream>
using namespace std;
int **add(int **mat1, int **mat2, int m, int n)
{ // addition not possible
    if (mat1[0][1] != mat2[0][1] || mat1[0][3] != mat2[0][3])
    {
        cout << "The number of columns and rows are not same so addition not allowed!\nThnakyou";
        return 0;
    }
    int **mat3, t1 = mat1[0][2], t2 = mat2[0][2];
    for (int i = 0; i < (t1 + t2 + 1); i++)
    {
        mat3[i] = (int *)malloc(3 * sizeof(int));
    }
    mat3[0][0] = mat1[0][0], mat3[0][1] = mat1[0][1];
    for (int j = 0; j < m; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (mat1[j][k] != 0 && mat2[j][k] != 0)
            {
                mat3[j][k] = mat1[j][k] + mat2[j][k];
            }
            else
            {
                mat3[j][k] = 0;
            }
        }
    }
    return mat3;
}
int main()
{
    cout << "         for mat1        give the input\n";
    int **mat1, m, n, **mat2, **mat3;
    cout << "Enter the number of rows for mat1 : ";
    cin >> m;
    cout << "Enter the number of columns for mat1: ";
    cin >> n;
    // take input of elements
    mat1 = new int *[m];
    for (int i = 0; i < m; i++)
    {
        mat1[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the integer : ";
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    int p, q;
    cout << "         for mat2        give the input\n";
    cout << "Enter the number of rows for mat2 : ";
    cin >> p;
    cout << "Enter the number of columns for mat2 : ";
    cin >> q;
    mat2 = new int *[p];
    for (int k = 0; k < p; k++)
    {
        mat2[k] = new int[q];
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << "Enter the integer : ";
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    // calling add function to add the two mat1 and mat2
    mat3 = add(mat1, mat2, m, n);
    cout << "          mat3                 \n";
    // printing the values of the mat3 matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
//if the 