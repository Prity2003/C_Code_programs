#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x = 10;
    int *p;
    int **q;

    p = &x;
    q = &p;

    printf("x value is %d\n", x);
    printf("address of x is %d\n", &x);
    printf("The value of p is %d\n", p);
    printf("The address of p is %d\n", &p);
    printf("The value pointed by the pointer p is %d\n", *p);
    printf("The value of q is %d\n", q);
    printf("The address of q is %d\n", &q);
    printf("The value of x by using pointer to pointer is %d\n", *q);

    return 0;

}
