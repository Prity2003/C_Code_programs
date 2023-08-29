#include<stdio.h>
int main()
{
    int principal = 500000;
    float year = 2.5, rate = 5;

    float simpleInterest = principal*rate*year/100;

    printf("The value of simple interest is %f", simpleInterest);

    return 0;

}
