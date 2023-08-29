#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    int i=0,j=strlen(s1)-1,temp;
    printf("Enter the string\n");
    gets(s1);

    while(i<j/2)
    {
        temp = s1[i];
        s1[i]= s1[j];
        s1[j]= temp;
        i++;
        j--;
    }

    printf("Reverse of string is: %s", s1);

    return 0;
}
