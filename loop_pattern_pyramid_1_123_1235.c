#include<stdio.h>

int main()
{
    int i,j,count=1,n=5;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<(2*i); k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
