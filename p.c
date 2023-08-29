#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 100;

    int *p1;
    int **p2;
    int ***p3;

    p1 = &n;
    p2 = &p1;
    p3 = &p2;

    printf("The value of n is %d\n", *p1);
    printf("The Address of n is %d\n", p1);

    n++;
    printf("The value of n is %d\n", *p1);
    printf("The Address of n is %d\n", p1);


}
