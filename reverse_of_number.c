#include<stdio.h>

int reverse_no(int n);

int main()
{
    int n,rev;
    printf("Enter the number\n");
    scanf("%d", &n);
    rev = reverse_no(n);
    printf("Reverse of number is %d",rev);
    return 0;
}
int reverse_no(int n)
{
    int rev=0,temp,last;
    temp = n;
    while(temp !=0)
    {
        last = temp%10;
        rev = (rev*10)+last;
        temp = temp/10;
    }
    return rev;
}


