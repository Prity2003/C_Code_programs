#include<stdio.h>

int gcd(int a, int b);

int main()
{
    int n1,n2,result;
    printf("Enter two numbers\n");
    scanf("%d %d", &n1, &n2);
    result = gcd(n1, n2);
    printf("The GCD of %d and %d is: %d\n",n1,n2,result);
    return 0;
}
int gcd(int a, int b)
{
    while(a != b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;

}

