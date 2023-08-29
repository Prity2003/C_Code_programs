/*C Program to find the largest element in an Array using Recursion and Macro*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX(X,Y) (((X) > (Y)) ? (X):(Y))   //syntax of macro

int findMax(int *p,int);  //Function declaration

int main(void)
{
    int A[] = {10,5,20,30,8,35};    //Array elements
    int size = sizeof(A)/sizeof(A[0]);
    int ans = findMax(A, size);

    printf("Max = %d\n", ans);
    printf("Max = %d\n", findMax(A, size));

    return 0;  //return exit_success
}
int findMax(int *p,int size)  //Function definition
{
    int max = *p;
    for(int i=1; i<size; i++)  //loop starts from
    {
        max = MAX(max, p[i]);
    }
    return max;
