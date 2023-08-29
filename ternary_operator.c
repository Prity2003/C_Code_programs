#include<stdio.h>

int main()
{
    int n1,n2,large;
    printf("Enter the number 1\n");
    scanf("%d", &n1);
    printf("Enter the number 2\n");
    scanf("%d", &n2);
    large = (n1>n2) ? (n1) : (n2);
    printf("The largest number between %d and %d is %d\n", n1,n2,large);
    return 0;
}
