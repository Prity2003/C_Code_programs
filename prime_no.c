#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Primeno(int, int);  //Function declaration;

int main()
{
    int n,prime;     //declaration of variable

    printf("Enter the positive number\n");  //printing number
    scanf("%d", &n);

    prime = Primeno(n, n/2);  //Function call
    if(prime == 1)
    {
        printf("%d is a Prime number\n", n);  //printing that the number is prime
    }
    else
    {
        printf("%d is a composite number\n", n);  //printing that the number is composite
    }
    return 0;   //return EXIT_SUCCESS
}

int Primeno(int n, int i)   //Function definition
{
    if(i == 1)  //Base condition
    {
        return 1;  //return statement 1
    }
    else if(n%i == 0)
    {
        return 0;
    }
    else
    {
        return (Primeno(n, i-1));  //recursive call
    }
}
