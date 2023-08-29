#include<stdio.h>
#define SIZE 5

int main()
{
    int A[] = {1,2,3,4,5};
    int *p[5];

    for(int i=0; i<5; i++)
    {
        p[i] = &A[i];
    }
    for(int i=0; i<5; i++)
    {
        printf("A[%d] = %d\n",i,*p[i]);
    }
    return 0;
}
