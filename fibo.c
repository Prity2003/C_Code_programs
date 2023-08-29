#include<stdio.h>
int fibo(int n);

int main()
{
    int n,i,m=0;

    printf("Enter the number of terms:");
    scanf("%d", &n);
    printf("Fibonacci series :");
    for(i=1; i<=n; i++)
    {
        printf("%d ", fibo(m));
        m++;
    }
    return 0;
}
int fibo(int n)
{

if(n==0 || n==1)

    return n;

else

    return (fibo(n-1) +fibo(n-2));
}
