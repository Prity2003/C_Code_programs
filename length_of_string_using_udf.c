#include<stdio.h>

int strlen(char *c)
{
    int len=0;
    while(*c != '\0')
    {
        c++;
        len++;
    }
    return len;
}
int main()
{
    char str[10];
    int len;
//    printf("Enter the string\n");
//    scanf("%s", str);
    puts("Enter the string\n");
    gets(str);
    len = strlen(str);
    printf("The length of this string is: %d", len);
    return 0;

}
