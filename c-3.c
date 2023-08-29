#include<stdio.h>

int main()
{
    int i,j,k,t=1,n=4;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf(" ");

        for(k=1; k<=j; k++){
            printf("%d ", t++);
        }
        printf("\n");
    }
    return 0;
}
