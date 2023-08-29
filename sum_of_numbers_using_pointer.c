#include<stdio.h>

int main()
{
    int i,n1,n2,n3,n4,n5,sum=0;
    printf("Enter five integer numbers\n");
    scanf("%d %d %d %d %d", &n1,&n2,&n3,&n4,&n5);
    int *p = &n1;
    int *q = &n2;
    int *r = &n3;
    int *s = &n4;
    int *t = &n5;

    sum = *p+*q+*r+*s+*t;

    printf("The sum of the numbers is: %d\n",sum);
    return 0;
}
