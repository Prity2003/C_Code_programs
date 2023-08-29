#include<stdio.h>

int main(void)
{
    int A[] = {10,5,20,30,8,35};
    int size = sizeof(A)/sizeof(A[0]);
    int ans = findMin(A, size);
    printf("Min = %d\n", ans);
    printf("Min = %d\n", findMin(A, size));

    return 0;
}
int findMin(int *p,int size)
{
    int min = *p;
    for(int i=1; i<size; i++)
    {
        min = MIN(min, p[i]);
    }
    return min;
}

