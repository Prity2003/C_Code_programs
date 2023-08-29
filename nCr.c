#include<stdio.h>
#include<math.h>

int fact(int n);

int main()
{
    int n,r,ans;
    printf("Enter the value of n and r\n");
    scanf("%d %d", &n, &r);
    if(n<0 || r<0 || n<r)
    {
        printf("The input is invalid!\n");
    }
    else
    {
        ans = fact(n)/(fact(r) * fact(n-r));
        printf("the value of %dC%d is: %d\n",n,r, ans);
    }
    return 0;
}

int fact(int n)
{
    if(n == 0 || n == 1)
        return 1;

    else
        return n*fact(n-1);
}

