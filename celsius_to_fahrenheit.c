#include<stdio.h>

int main()
{
    float celsius,far;
//    celsius = 90;

    printf("Enter the value of temperature  in celsius\n");
    scanf("%f", &celsius);
    far = celsius*9/5 + 32;
    printf("The value of this temperature in fahrenheit is %f\n",far);

    printf("Enter the value of temperature  in fahrenheit\n");
    scanf("%f", &far);
    celsius = (far - 32)*5/9;
    printf("The value of this temperature in celsius is %f\n",celsius);

    return 0;
}
