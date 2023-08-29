#include<stdio.h>

int perfect(int n);

int main()
{
    int i,n,sum=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    sum=perfect(n);
    if(sum == n)
        printf("%d is perfect\n", n);
    else
        printf("%d is not perfect\n", n);
    return 0;
}

int perfect(int n)
{
    int sum=0;
    for(int i=1; i<n; i++)
    {
        if(n%i == 0)
            sum += i;
    }
    return sum;

}
