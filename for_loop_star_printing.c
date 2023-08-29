#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n=5;
    for(i=1; i<=(2*n-1); i++)
    {
        for(j=1; j<=i; j++)
            printf("%d", j);
            printf("\n");
    }
    return 0;
}
