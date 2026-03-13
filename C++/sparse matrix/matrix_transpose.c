#include <stdio.h>
#include <stdlib.h>
int **transpose(int **M1, int row, int col, int k)
{
    int **M2;
    M2 = (int **)malloc((k + 1) * sizeof(int *));
    for (int i = 0; i < k; i++)
    {
        M2[i] = (int *)malloc(3 * sizeof(int));
    }
    M2[0][0] = col, M2[0][1] = row, M2[0][2] = k;
    for (int i = 1; i <= k; i++)
    {
        M2[i][0] = M1[i][1];
        M2[i][1] = M1[i][0];
        M2[i][2] = M1[i][2];
    }
    return M2;
}
int main()
{
    int **M1;
    int row, col, k;
    printf("Enter the rows : ");
    scanf_s("%d", &row);
    printf("Enter the cols : ");
    scanf_s("%d", &col);
    printf("Enter the total numer of non_zero elements : ");
    scanf_s("%d", &k);
    M1 = (int **)malloc((k + 1) * sizeof(int *));
    for (int i = 0; i <= k; i++)
    {
        M1[i] = (int *)malloc(3 * sizeof(int));
    }
    for (int i = 1; i <= k; i++)
    {
        printf("enter the row : ");
        scanf_s("%d", &M1[i][0]);
        printf("enter the col : ");
        scanf_s("%d", &M1[i][1]);
        printf("enter the element : ");
        scanf_s("%d", &M1[i][2]);
    }
    M1[0][0] = row;
    M1[0][1] = col;
    M1 = transpose(M1, row, col, k);
    for (int i = 0; i <= k; i++)
    {
        printf("%d\t%d\t%d", M1[i][0], M1[i][1], M1[i][2]);
    }
    return 0;
}