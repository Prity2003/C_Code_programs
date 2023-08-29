#include<stdio.h>
#define PI 3.14
int main()
{
    float radius = 5,area, hieght = 3,volume;
    area = PI*radius*radius;
    printf("The area of a circle is %f\n",area);

    volume = area*hieght;
    printf("The volume of this cylinder is %f\n ", volume);

    return 0;
}
