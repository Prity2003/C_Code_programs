#include<stdio.h>

int armstrong(int n);

int main()
{
    int i,n,sum=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    sum=armstrong(n);
    if(sum == n)
        printf("%d is armstrong\n", n);
    else
        printf("%d is not armstrong\n", n);
    return 0;
}

int armstrong(int n)
{
    int i,sum=0;
    while(n !=0)
    {
            i=n%10;
            sum += (i*i*i);
            n=n/10;
    }
    return sum;

}
