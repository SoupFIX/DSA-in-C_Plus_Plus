#include <stdio.h>
#include <stdlib.h>
int print(int row, int col)
{
    int k;
    printf("enter number of non_zero elements : ");
    scanf_s("%d", &k);
    int **M = (int **)malloc((k + 1) * sizeof(int *));
    for (int i = 0; i <= k; i++)
    {
        M[i] = (int *)malloc(3 * sizeof(int));
    }
    M[0][0] = row;
    M[0][1] = col;
    M[0][2] = k;
    int rows, cols, num;
    for (int i = 1; i <= k; i++)
    {
        printf("Enter the row no. : ");
        scanf_s("%d", &rows);
        printf("Enter the column no. : ");
        scanf_s("%d", &cols);
        printf("Enter the number : ");
        scanf_s("%d", &num);
        M[i][0] = rows;
        M[i][1] = cols;
        M[i][2] = num;
    }
    // for printing
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100];
    int row, col;
    printf("enter the row :")
        scanf_s("%d", &row);
    printf("enter the column : ");
    scanf_s("%d", &col);
    print(row, col);
}