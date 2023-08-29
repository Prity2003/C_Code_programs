#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0;
    char s1[50],s2[30];
    printf("Enter the string\n");
    scanf("%s", &s1);

    while(s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("The copied string is: %s\n", s2);
    printf("the number of characters are: %d", i);
return 0;
}
