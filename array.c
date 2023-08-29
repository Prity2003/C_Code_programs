#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int age[] = { 16, 22, 26 };  //int array
char *name[] = { "Prity", "Khushbu", "Nilesh" };  //char array
int c;

int main(int i, char** j)
{
    for (c = 0; c < 3; c++) //loop starts from 0
    {
        printf("%s is %d years old\n", name[c], age[c]); //traversing of array
    }

    return 0;  //return exit_success
}
