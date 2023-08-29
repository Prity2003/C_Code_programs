#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    char c;
    char str[50];
    printf("Enter the string\n");
    scanf("%s", str);
    fflush(stdin);
    printf("Enter the character to be found from string\n");
    scanf("%c", &c);

    while(str[i] != '\0')
    {

        if(str[i] == c)
        {
        printf("The position of %c is at %d\n",c,  i);
        }
        i++;

    }
    return 0;



}
