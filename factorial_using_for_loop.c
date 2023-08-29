#include<stdio.h>

int main()
{
    int i,n=6,fact=1;

    for(i=1; i<=n; i++)
    {
        fact *= i;
    }
    printf("The factorial of %d is %d", n, fact);
    return 0;
}
