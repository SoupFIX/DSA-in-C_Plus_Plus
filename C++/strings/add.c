#include <stdio.h>
// function defination statement
int main()
{
    int a = 56;
    int *q;
    q = &a;
    printf("%p\n", &a); // address of a
    printf("%p", q);    // a value
    return 0;
}