#include <stdio.h>
#include <string.h>

int IsPalindrome(char *c)
{
    int i = 0;
    int j = strlen(c) - 1;
    while (i < j)
    {
        if (c[i] != c[j])
        {

            i++;
            j--;
            printf(" Not Palnidrome");
            return;
        }
        else
        {
            printf("Palindrome");
            return;
        }
    }
}
int main()
{
    char str[10];
    int ans;
    printf("Enter the string\n");
    gets(str);
    IsPalindrome(str);
    return 0;
}
