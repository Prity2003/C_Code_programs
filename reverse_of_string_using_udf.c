#include<stdio.h>
int main()
{
    char s1[50],s2[50], temp;
    int i=0;
    int j=strlen(s1)-1;
    printf("Enter the string\n");
    gets(s1, 50, stdin);

    while(i>=0)
    {
        s2[j]=s1[i];
        j++;
        i--;
//        temp = str[i];
//        str[i] = str[j];
//        str[j] = temp;
//        i++;
//        j--;
    }
    s2[j] = '\0';
    printf("The reverse of string is: %s\n", s2);
    return 0;
}
