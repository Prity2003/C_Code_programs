#include<stdio.h>

int main()
{
    int i;

    for(i=1; i<=10; i++)
    {
        printf("10 * %d = %d\n",i,10*i);
    }

    printf("For ascending order\n");

     for(i=10; i; i--)
    {
        printf("10 * %d = %d\n",i,10*i);
    }
    return 0;
}
