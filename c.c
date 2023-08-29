#include<stdio.h>
#define N 10
void main()
{
    int count=0;
    float sum=0,average,number;

    while(count < N)
    {
        scanf("%f", &number);
        sum+= number;
        count+=1;
    }
    average = sum/N;
    printf("N = %d Sum = %f", N,sum);
    printf("Average = %f", average);

}




