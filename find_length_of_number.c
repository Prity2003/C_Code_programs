#include<stdio.h>

int countLength(int n);

int main()
{
    int n,len;
    printf("Enter the number\n");
    scanf("%d", &n);
    len = countLength(n);
    printf("Length of digit is: %d",len);

    return 0;
}

int countLength(int n)
{
    int temp=0,len=0;
    temp=n;
    while(temp !=0)
    {
        temp = temp/10;
        len++;
    }
    return len;
}
