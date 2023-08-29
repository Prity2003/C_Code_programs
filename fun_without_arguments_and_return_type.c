#include<stdio.h>
//function without arguments and without return type
void sum()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d", &a,&b);
    c = a+b;
    printf("Sum = %d", c);
}
int main()
{
    sum();
}

//function with argument and without return type

//void sum(int a, int b)
//{
//    int c;
//    c= a+b;
//    printf("Sum = %d", c);
//}
//int main()
//{
//    int a,b;
//    printf("Enter two numbers\n");
//    scanf("%d %d", &a,&b);
//    sum(a,b);
//}
//function without arguments and with return type

// int sum()
// {
//     int a,b,c;
//     printf("Enter two numbers\n");
//     scanf("%d %d", &a,&b);
//     c= a+b;
//     return c;
// }
// int main()
// {
//     int a,b,c;
//     printf("Enter two numbers\n");
//     scanf("%d %d", &a,&b);
//     c=sum();
//     printf("Sum = %d", c);
// }
 //function with arguments and with return type

// int sum(int a, int b)
// {
//     int c;
//     c = a+b;
//     return c;
// }
// int main()
// {
//     int a,b,c;
//     printf("Enter two numbers\n");
//     scanf("%d %d", &a,&b);
//     c = sum(a,b);
//     printf("Sum = %d", c);
//     return 0;
// }
