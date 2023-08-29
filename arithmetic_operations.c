#include<stdio.h>
#include<math.h>

int main()
{
    int n1,n2,add,sub,mul,div,mod;
    printf("Enter the number 1\n");
    scanf("%d", &n1);
    printf("Enter the number 2\n");
    scanf("%d", &n2);

//   add = n1+n2;
    printf("%d + %d = %d\n",n1,n2, n1+n2);
    printf("%d - %d = %d\n",n1,n2, n1-n2);
    printf("%d * %d = %d\n",n1,n2, n1*n2);

    printf("%d / %d = %d\n",n1,n2, n1/n2);
    printf("%d %% %d = %d\n",n1,n2, n1%n2);
    return 0;
}

