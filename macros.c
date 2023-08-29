#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INCREMENT(x) ++x    //macro definition

int main(void)
{
    char *p = "110011";   //pointer to character
    int n = 10;     //declaration of variable and value is given

    printf("%s\n", INCREMENT(p));  //printing string character constants with increment
    printf("%d\n", INCREMENT(n));  //printing n with increment
    return 0;   //return exit_success
}
