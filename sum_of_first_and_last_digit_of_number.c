#include<stdio.h>
#include<math.h>
#define log(x)
#define pow(x)

int firstDigit(int n);
int lastDigit(int n);

int main()
{
    int n,sum=0,firstDigit,lastDigit,digit;
    printf("Enter the number\n");
    scanf("%d", &n);
    lastDigit = n%10;
    digit = (int)log10(n);
    firstDigit = (int)(n/pow(10, digit));
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit is: %d", sum);
    return 0;
}

int firstDigit(int n)
{
    while(n>=10)
        n = n/10;
    return n;
}
int lastDigit(int n)
{
    return (n%10);
}
