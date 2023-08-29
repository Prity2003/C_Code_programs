#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void EvenOdd(int num, int value);   //Function declaration;

int main()
{
    int lowerValue, upperValue;

    //Taking upper and lower value from the user
    printf("Enter the lower value :");
    scanf("%d", &lowerValue);
    printf("Enter the upper value :");
    scanf("%d", &upperValue);

    int value;

    printf("Even or Odd numbers from %d to %d are :", lowerValue ,upperValue);  //Function call;
    EvenOdd(lowerValue, upperValue);

    return 0;     //return exit_success
}

void EvenOdd(int num, int value)    //Function definition;
{
    if(num>value)

        return;

    printf("%d ", num);


    return EvenOdd(num + 2, value);   //Recursion of EvenOdd()

}
