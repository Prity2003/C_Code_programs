#include<stdio.h>

void swap(int *a, int *b);

int main()
{
    int n1,n2,temp;
    printf("Enter two values\n");
    scanf("%d %d", &n1, &n2);
    printf("Before swapping: n1 = %d and n2 = %d\n", n1,n2);
    swap(&n1, &n2); //pass the address of both variables to the function
    printf("After swapping: n1 = %d and n2 = %d\n", n1,n2);

    return 0;
}
void swap(int *a, int *b)
{
    //a=&n1 so p store the address of n1, so *a store the value of n1
	//b=&n2 so q store the address of n2, so *b store the value of n2

int temp = *a; // temp store the value of n1
    *a = *b;   // *a store the value of *b that is value of n2
    *b = temp;  // *b store the value of temp that is the value of n1
}
