#include<stdio.h>

int main()
{
    int physics,maths,chemistry;
    float total;

    printf("Enter the Physics marks %d\n", physics);
    printf("Enter the Maths marks %d\n", maths);
    printf("Enter the Chemistry marks %d\n", chemistry);

    total = ((physics+maths+chemistry)/3);
    if( (total >= 40 && total <= 100) || (physics >=33 && physics <=100) || (maths >= 33 && maths <=100) || (chemistry >=33 && chemistry <=100) );
    {
        printf("The student is pass\n", total);
    }
    else
    {
        printf("The student is fail\n", total);
    }
}
