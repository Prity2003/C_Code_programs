//#include<stdio.h>
//int main() {
//
//char s[] = "Harrys";
//
//char temp;
//
//int len=0,i;
//
//while(s[len] != '\0') {
//
//len++;
//
//}
//
//printf("The length of this string is %d\n", len); for (int i = 0; (i < len-1)/2; i++);
//
//{
//
//temp = s[i];
//
//s[i] = s[len-1-i];
//
//s[len-1-1] = temp;
//
//}
//
//printf("String now is %s", s);
//
//return 0;
//}


//#include<stdio.h>
//
//int main() {
//
//char s[] = "Harrys";
//
//char temp;
//
//int len=0;
//
//while(s[len] != '\0') {
//
//len++;
//
//}
//
//printf("The length of this string is %d\n", len);
//
//for (int i = 0; i < (len-1)/2; i++)
//
//{
//
//temp = s[i];
//
//s[i] = s[len-1-i];
//
//s[len-1-i] = temp;
//
//}
//
//printf("String now is %s", s);
//
//return 0;
//}

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]= "tejas";
    int i=0,j=strlen(s1)-1,temp;
  //  ("Enter the string\n");
    //gets(s1);

    while(i<=(j-1)/2)
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
