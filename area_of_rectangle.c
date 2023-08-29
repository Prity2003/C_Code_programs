#include<stdio.h>

int main()
{
    int length,width,area,perimeter;

    printf("Enter the length\n");
    scanf("%d", &length);
    printf("Enter the width\n");
    scanf("%d", &width);

    perimeter = 2*(length + width);
    area = length*width;
    printf("The perimeter of rectangle is %d\n",perimeter);
    printf("The area of rectangle is %d\n",area);

    return 0;
}


