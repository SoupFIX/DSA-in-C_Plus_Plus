#include <stdio.h>
int new_arr(int *ar, int len)
{
    int n = 0;
    for (int m = len - 2; m != len; m++)
    {
        printf("%d ", ar[m]);
    }
    while (n != len - 2)
    {
        printf("%d ", ar[n]);
        n++;
    }
}
// driver code
int main()
{
    int a[] = {10, 20, 30, 40, 50}, len = sizeof(a) / sizeof(a[0]);
    printf("Old array : ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nNew Array : ");
    // function to print new array
    new_arr(a, len);
    return 0;
}