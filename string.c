#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter string:");
    fgets(str, 50, stdin);
    printf("Enter string:");
    puts(str);
    return 0;
}
