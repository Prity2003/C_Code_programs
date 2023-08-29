#include<stdio.h>
#include<string.h>

int IsPalindrome(char *c)
{
    int i=0;
    int j=strlen(c)-1;
    while(i<j)
    {
        if(c[i] != c[j])
        {
            return -1;
            i++;
            j--;
        }
    }
    return 1;
}
int main()
{
    char str[10];
    char ans;
    printf("Enter the string\n");
    gets(str);
    ans = IsPalindrome(str);
    if(ans == 1){
        printf("Palindrome\n");
    }

    else{
       printf("Not Palindrome\n");
    }
    return 0;
}
