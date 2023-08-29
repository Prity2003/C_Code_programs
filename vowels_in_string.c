#include<stdio.h>

int main()
{
    int i=0,count=0;
    char str[10];

    printf("Enter the string\n");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == 'a' ||
           str[i] == 'A' ||
           str[i] == 'e' ||
           str[i] == 'E' ||
           str[i] == 'i' ||
           str[i] == 'I' ||
           str[i] == 'o' ||
           str[i] == 'O' ||
           str[i] == 'u' ||
           str[i] == 'U'
           )
            count++;
            i++;
        }
        printf("The number of vowels in the string: %d", count);

    return 0;
}
