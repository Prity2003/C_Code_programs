#include<stdio.h>

int main()
{
    int i,n,min,sum=0;
    float avg;
    int A[10];
    printf("Enter the number of elements\n");
    for(i=0; i<10; i++)
    {
//        printf("Enter the number of elements\n");
        scanf("%d", &A[i]);
                                                                                                                             sum += A[i];
        avg = sum/10;
    }
    printf("Sum of all elements is: %d\n", sum);
    printf("Average of all elements is: %f\n", avg);
    min = A[0];
    for(i=0; i<10; i++)
    {
        if(min>A[i])
            min = A[i];
    }
    printf("The minimum element is: %d", min);

    return 0;
}
