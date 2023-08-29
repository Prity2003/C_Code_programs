#include<stdio.h>
#include<math.h>
#define CUBE(x) (x)*(x)*(x)
#include<math.h>
int main()
{
    int i,n=6;
    float sum=0;
    sum = pow(((n*(n+1))/2),2);
    printf("Sum of the series: ");
    for(i=1; i<=n; i++)
    {
       if(i != n)
       printf("%d^3 + ",i);
       else
        printf("%d^3 = %d", i,sum);

    }
    return 0;
}
