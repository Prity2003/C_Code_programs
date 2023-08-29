#include<stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    //int fact(n);
    int factorial(n);
    printf("%d",factorial(n));

    return 0;
}

int factorial(int n)
{
    if(n== 0 || n==1)
    {
        return n;
    }
    else
    {
        return n*factorial(n-1);
    }

}
