#include<stdio.h>

int main(void)
{
    int n=100;

    int *p1;
    int **p2;
    int ***p3;

    p1 = &n;
    p2 = &p1;
    p3 = &p2;

    printf("Value of n = %d\n",*p1);
    printf("Address of n = %u\n", p1);

    // n = n+1;
    // printf("Value of n after Addition = %d\n", *p1);
    // printf("Address of n after Addition = %u\n", p1);

    n++;
    p1 = &n;
    printf("Value of n after Increment = %d\n", *p1);
    printf("Address of n after Increment = %u\n", p1);

    printf("Value of p1 = %d\n", *p2);
    printf("Address of p1 = %u\n", p2);

    // p1 = p1+1;
    //printf("Value of p1 after Addition =%d\n", *p2);
    //printf("Address of p1 after Addition = %u\n", p2);

    // p1++;
    //printf("Value of p1 after Increment  = %d\n", *p2);
    //printf("Address of p1 after Increment = %u\n", p2);


    printf("Value of p2 = %d\n", *p3);
    printf("Address of p2 = %u\n", p3);

    //p2 = p2+1;
    //printf("Value of p2 after Addition = %d\n", *p3);
    //printf("Address of p2 after Addition = %u\n", p3);

    //  p2++;
    //printf("Value of p2 after Increment = %d\n", *p3);
    //printf("Address of p2 after Increment = %u\n", p3);

    printf("Value of p3 = %d\n", p3);
    printf("Address of p3 = %u\n", &p3);
    return 0;
}
