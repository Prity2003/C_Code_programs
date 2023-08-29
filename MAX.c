/*C Program to find the largest element in an Array using Recursion and Macro*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX(X,Y) (((X) > (Y)) ? (X):(Y))   //syntax of macro

int findMax(int *p,int);  //Function declaration

int main(void)
{
    int A[] = {10,5,20,30,8,50};    //Array elements
    int size = sizeof(A)/sizeof(A[0]);

    printf("Max Value = %d\n", findMax(A, size));  //Function call

    return 0;  //return exit_success
}

int findMax(int *p,int size)  //Function definition
{
    printf("p value is %d\n", p);
    printf("*p value is %d\n", *p);
    printf("size value is %d\n", size);

    if(size == 1)  //Base condition
    {
        return *p;   //return *p
    }
    else
    {
        return MAX(*p, findMax(p+1, size-1));  //recursive call
    }
}

