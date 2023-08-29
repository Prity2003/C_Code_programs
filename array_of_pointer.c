#include<stdio.h>
#include<string.h>
#define SIZE 5

void main()
{
    char *name[] = {"Prity","Jiya","Priya","Diksha","Divya"};
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("%s\n", name[i]);
    }
}
