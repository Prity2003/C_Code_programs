#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n = 100;  //declaration of variable

    int *p1;  //pointer to integer
    int **p2;
    int ***p3;

    p1 = &n;  //assigning adderess of n in p1
    p2 = &p1; //assigning adderess of p1 in p2
    p3 = &p2; //assigning adderess of p2 in p3

    printf("Value of n = %d\n", *p1);   //printing value of n
    printf("Address of n = %u\n", p1);  //printing Address of n

    printf("Value of p1 = %d\n", *p2);  //printing value of p1
    printf("Address of p1 = %u\n", p2); //printing Address of p1

    printf("Value of p2 = %d\n", *p3);  //printing value of p2
    printf("Address of p2 = %u\n", p3); //printing Address of p2

    printf("Value of p3 = %d\n", p3);  //printing value of p3
    printf("Address of p3 = %u\n", &p3); //printing Address of p3


    n++;
    p1++;
    p2++;
    p3++;

    printf("Value of n after Increment = %d\n", *p1);  //printing value of n after increment
    printf("Address of n after Increment = %u\n", p1); //printing Address of n after increment

    printf("Value of p1 after Increment = %d\n", *p2); //printing value of p1 after increment
    printf("Address of p1 after Increment = %u\n", p2); //printing Address of p1 after increment

    printf("Value of p2 after Increment = %d\n", *p3); //printing value of p2 after increment
    printf("Address of p2 after Increment = %u\n", p3); //printing Address of p2 after increment

    printf("Value of p3 after Increment = %d\n", p3);  //printing value of p3 after increment
    printf("Address of p3 after Increment = %u\n", &p3); //printing Address of p3 after increment

    return 0;  //return exit_success
}
