#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sum_numbers(int);  //Function declaration;

int main()
{
    int n,sum;   //declaration of variables

    printf("Enter the Nth number\n"); //printing number
    scanf("%d", &n);
    sum = sum_numbers(n);   //Function call

    printf("The sum of first %d natural number is : %d ", n, sum);  //printing sum of numbers
    return 0;   //return EXIT_SUCCESS
}

int sum_numbers(int n)   //Function definition
{
    static int sum = 0;  //Declaration of static variable

    if(n == 0)   //Base condition
    {
        return sum;  //return statement sum
    }
    else
    {
        sum = sum + n;
        sum_numbers(--n);  //recursive call

    }
}

