#include<stdio.h>

int area(int a);

int main()
{
    int c;
    c = area(5);
    printf("The area of square is : %d\n", c);

    return 0;
}`

int area(int a)
{
    int c;
    area = a*a;
    c= area;
    return c;
}
