#include<stdio.h>

int main()
{
    int num1 =5, num2 =4, num3 =8, num4 =3;

   // printf("Enter the four numbers\n");
    //scanf("%d", &num1, &num2, &num3, &num4);


    if(num1 > num2)
    {
        if(num1 > num3)
        {
            if(num1 > num4)
            {
                printf("num1 is greatest\n", num1);
            }
            else
            {
                printf("num4 is greatest\n", num4);
            }
        }
    }
    if(num2 > num3)
    {
        if(num2 > num4)
        {
            printf("num2 is greatest\n", num2);
        }
        else
        {
            printf("num4 is greatest\n", num4);
        }
    }
    if(num3 > num4)
    {
        printf("num3 is greatest\n", num3);
    }
    else
    {
        printf("num4 is greatest\n", num4);
    }

    return 0;
}
