#include<stdio.h>

int main()
{
    int income;
    float tax;

    printf("Enter your income\n");
    scanf("%d", &income);

    if(income <= 250000)
    {
        printf("No tax!", tax);
    }
    if(income > 250000 && income <=500000)
    {
        tax = tax + 0.05* (income-250000);
    }

    if(income > 500000 && income <=1000000)
    {
        tax = tax + 0.20* (income-500000);
    }

    if(income > 1000000)
    {
        tax = tax + 0.30* (income-1000000);
    }
    printf("Your tax is %f", tax);

    return 0;
}
