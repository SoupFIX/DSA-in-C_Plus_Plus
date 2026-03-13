#include <iostream>
using namespace std;
int **add_triplet(int **M1, int **M2, int k, int l)
{
    int **M3, row3, col3, val3;
    if (M1[0][0] != M2[0][0] || M1[0][1] != M2[0][1])
    {
        cout << "Addition not allowed!";
        return 0;
    }
    // allocating memory dynamically for triplet M3 holding the sum of M1 and M2
    M3 = (int **)malloc((k + l) * sizeof(int *));
    for (int i = 0; i <= (k + l); i++)
    {
        M3[i] = (int *)malloc(3 * sizeof(int));
    }
    // storing the heading of the M3.
    M3[0][0] = M1[0][0];
    M3[0][1] = M1[0][1];
    // will be updated later
    M3[0][2] = 0;
    for (int i = 1; i <= (k); i++)
    { // checking whether the two element which are to be added have same location or not
        for (int j = 1; j <= l; j++)
        {
            if (M1[i][0] == M2[j][0] && M1[i][1] == M2[j][1])
            {
                M3[i][0] = M1[i][0];
                M3[i][1] = M1[i][0];
                M3[i][2] = (M1[i][2] + M2[j][2]);
            }   
            else if (M1[i][0] == M2[j][0] && M1[i][1] > M2[j][1])
            {
                M3[i][0] = M2[j][0];
                M3[i][1] = M2[j][1];
                M3[i][2] = M2[j][2];
            }
            else if (M1[i][0] == M2[j][0] && M1[i][1] < M2[j][1])
            {
                M3[i][0] = M1[i][0];
                M3[i][1] = M1[i][1];
                M3[i][2] = M1[i][2];
            }
            else if (M1[i][1] == M2[j][1] && M1[i][0] < M2[j][0])
            {
                M3[i][0] = M1[i][0];
                M3[i][1] = M1[i][1];
                M3[i][2] = M1[i][2];
            }
            else if (M1[i][1] == M2[j][1] && M1[i][0] > M2[j][0])
            {
                M3[i][0] = M2[j][0];
                M3[i][1] = M2[j][1];
                M3[i][2] = M2[j][2];
            }
            else if (M1[i][0] != M2[j][0] && M1[i][1] != M2[j][1])
            {
                if (M1[i][1] != M2[j][1] && M2[j][0] > M1[i][0])
                {
                    M3[i][0] = M1[j][0];
                    M3[i][1] = M1[j][1];
                    M3[i][2] = M1[j][2];
                }
                if (M1[i][1] != M2[j][1] && M2[j][0] < M1[i][0])
                {
                    M3[i][0] = M2[j][0];
                    M3[i][1] = M2[j][1];
                    M3[i][2] = M2[j][2];
                }
                if (M1[i][1] < M2[j][1] && M2[j][0] != M1[i][0])
                {
                    M3[i][0] = M1[j][0];
                    M3[i][1] = M1[j][1];
                    M3[i][2] = M1[j][2];
                }
                if (M1[i][1] > M2[j][1] && M2[j][0] != M1[i][0])
                {
                    M3[i][0] = M2[j][0];
                    M3[i][1] = M2[j][1];
                    M3[i][2] = M2[j][2];
                }
            }
        }
    }
    return M3;
}
int main()
{
    int **M1, **M2, **M3, m, n, p, q;
    cout << "Enter the no of rows in matrix 1 : ";
    cin >> m;
    cout << "Enter the no of columns in matrix 1 : ";
    cin >> n;
    cout << "Enter the no of rows in matrix 2 : ";
    cin >> p;
    cout << "Enter the no of columns in matrix 2 : ";
    cin >> q;
    // k is the number of non_zero elements in the M1 triplet
    int k;
    cout << "Enter the number of non_zero elements in M1 : ";
    cin >> k;
    // allocating memory dynamically to the 2D array M1.
    M1 = (int **)malloc((k + 1) * sizeof(int *));
    // l is the number of non_zero elements in the M2 triplet
    int l;
    cout << "Enter the number of non_zero elements in M2 : ";
    cin >> l;
    // allocating memory dynamically to the 2D array M2.
    M2 = (int **)malloc((l + 1) * sizeof(int *));
    // allocating memory to each value of the triplet
    for (int i = 0; i <= k; i++)
    {
        M1[i] = (int *)malloc(3 * sizeof(int));
    }
    // allocating memory to each value of the triplet
    for (int i = 0; i <= l; i++)
    {
        M2[i] = (int *)malloc(3 * sizeof(int));
    }
    // storing the heading values to the M1 triplet.
    M1[0][0] = m;
    M1[0][1] = n;
    M1[0][2] = k;
    int row1, col1, val1;
    for (int i = 1; i <= k; i++)
    {
        cout << "Enter the row in M1: ";
        cin >> row1;
        cout << "Enter the column in M1: ";
        cin >> col1;
        cout << "Enter the value in M1: ";
        cin >> val1;
        M1[i][0] = row1;
        M1[i][1] = col1;
        M1[i][2] = val1;
    }
    // storing the heading values to the M2 triplet
    M2[0][0] = p;
    M2[0][1] = q;
    M2[0][2] = l;
    // take input for the non_zero elements in the triplet M2
    int row2, col2, val2;
    for (int i = 1; i <= l; i++)
    {
        cout << "Enter the row in M2 : ";
        cin >> row2;
        cout << "Enter the column M2 : ";
        cin >> col2;
        cout << "Enter the value M2 : ";
        cin >> val2;
        M2[i][0] = row2;
        M2[i][1] = col2;
        M2[i][2] = val2;
    }
    // displaying the triplet form of M1.
    cout << "The triplet form M1 : \n";
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << M1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nThe triplet form M2 is : \n";
    // displaying the triplet form of M2.
    for (int i = 1; i <= l; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << M2[i][j] << " ";
        }
        cout << endl;
    }
    // M3 = (int **)malloc((k + l + 1) * sizeof(int *));
    // for (int i = 0; i <= (k + l); i++)
    // {
    //     M3[i] = (int *)malloc(3 * sizeof(int));
    // }
    M3 = add_triplet(M1, M2, k, l);
    cout << "THE RESULTANT TRIPLET IS : \n";
    for (int i = 1; i <= (k + l); i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << M3[i][j] << " ";
        }
        cout << endl;
    }
    free(M1);
    free(M2);
    free(M3);
    return 0;
}