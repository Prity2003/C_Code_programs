#include<stdio.h>
int sum(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
}
int main()
{
    int x,y,c;
    x = 5;
    y = 10;
    c = sum(&x, &y);
    printf("Sum = %d",c,x,y);
    return 0;
}
