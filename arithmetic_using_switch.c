#include<stdio.h>

int main()
{
    int n1,n2,op;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter two numbers\n");
    scanf("%d %d", &n1,&n2);
    printf("Enter your choice between 1 to 4\n");
    scanf("%d", &op);

    switch(op)
    {
    case 1 :
        printf("%d + %d = %d",n1,n2,n1+n2);
        break;
    case 2 :
        printf("%d - %d = %d",n1,n2,n1-n2);
        break;
    case 3 :
        printf("%d * %d = %d",n1,n2,n1*n2);
        break;
    case 4 :
        printf("%d / %d = %d",n1,n2,n1/n2);
        break;
    default:
        printf("wrong output!\n");
    }
}
