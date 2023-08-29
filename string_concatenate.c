#include<stdio.h>

int main()
{
    int i=0,j=0;
    char s1[50], s2[50], s3[100];
    printf("Enter string 1\n");
    gets(s1);
    printf("Enter string 2\n");
    gets(s2);

    while(s1[i] != '\0')
    {
        s3[i] = s1[i];
        i++;
        j++;
    }
    i=0;
    while(s2[i] != '\0')
    {
        s3[j] = s2[i];
        j++;
        i++;
    }
    s3[j] = '\0';
    printf("%s",s3);

    return 0;
}
