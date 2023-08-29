//#include<stdio.h>
//
//int main()
//{
//    char str[100];
//    int i,count = 0;
//    printf("Enter the string\n");
//    scanf("%s",str);
//
//    //iterate the string
//    for(i = 0; str[i] != '\0'; i++)
//    {
//        //check each char with any vowel. 'a','e','i','o','u'.
//        if( str[i] == 'a' ||
//            str[i] == 'e' ||
//            str[i] == 'i' ||
//            str[i] == 'o' ||
//            str[i] == 'u'    )
//        {
//            //if equal increment the count
//            count++;
//        }
//    }
//
//    //print the result
//    printf("vowel count = %d\n",count);
//
//    return 0;
//}

#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}
