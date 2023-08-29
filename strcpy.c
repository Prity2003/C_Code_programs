#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char s1[50],s2[50];
    printf("Enter the string\n");
    gets(s1);
    i = strcpy(s2,s1);
    printf("Your copied string is: %s",s2);

}
