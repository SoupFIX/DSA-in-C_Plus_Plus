#include <stdio.h>
int MyX(int *E, unsigned int size)
{
    int Y = 0;
    int Z;
    int i, j, k;
    for (i = 0; i < size; i++)
        Y = Y + E[i];
    for (i = 0; i < size; i++)
        for (j = i; j < size; j++)
        {
            Z = 0;
            for (k = i; k <= j; k++)
                Z = Z + E[k];
            if (Z > Y)
                Y = X;
        }
    return Y;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5}, size = 5;
}