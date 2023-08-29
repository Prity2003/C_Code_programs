#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char s1[10];
    printf("Enter the string\n");
    gets(s1);
    printf("Reverse of %s is:", s1);
    i = strrev(s1);
    printf("%s", s1);
    return 0;
}
