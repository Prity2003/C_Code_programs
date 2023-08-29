#include<stdio.h>
//
//void main()
//{
//    int i = 7;
//    switch(i)
//    {
//    case 3:
//        printf("Three\n");
//    case 4:
//        printf("Four\n");
//    case 5:
//        printf("Five\n");
//    case 6:
//        printf("Six\n");
//        break;
//    case 7:
//        printf("Seven\n");
//    default:
//        printf("Default\n");
//    }
//
//}

void main()
{
    int x[] = {1,2,3,4,5};
    printf("%d", fun(&x[2]));
}
int fun(int *a)
{
    int i=0,sum=0;
    for(i=0; i<2; i++,a++)
        sum += *a;
    return (sum);
}
