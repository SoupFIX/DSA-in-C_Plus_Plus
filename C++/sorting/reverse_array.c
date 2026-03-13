#include <stdio.h>
void rev(int *ar, int len)
{
    for (int i = len - 1; i != -1; i--)
    {
        printf("%d  ", ar[i]);
    }
}
// driver code
int main()
{
    int ar[] = {2, 3, 4, 5, 6, 7, 9}, len = sizeof(ar) / sizeof(ar[0]);
    // function to reverse the array.
    printf("Old Array :");
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", ar[i]);
    }
    printf("\nReversed Array : ");
    rev(ar, len);
    return 0;
}