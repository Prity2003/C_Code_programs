#include<stdio.h>

void Reverse(char *c)
{
    if(*c)
    {
        Reverse(c+1);
        printf("%c", *c);
    }
}

int main()
{
    char str[50];
    printf("Enter the string\n");
    scanf("%s", &str);
    Reverse(str);

    return 0;
}
