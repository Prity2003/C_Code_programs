#include<stdio.h>
#include<math.h>
int main()
{
    float disatnce,km,meter,feet,inch,centimeter;

    printf("Enter the distance into kilometer\n");
    scanf("%f", &km);

    meter = 1000*km;
    feet = 3.28*meter;
    inch = 12*feet;
    centimeter = 2.54*inch;

    printf("%.2f km = %.2f meter\n", km,meter);
    printf("%.2f km = %.2f feet\n", km,feet);
    printf("%.2f km = %.2f inch\n", km,inch);
    printf("%.2f km = %.2f centimeter\n", km,centimeter);

    return 0;
}
