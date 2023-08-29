#include<stdio.h>

//int main()
//{
//    int A[][3] = {{1,2,3}, {4,5,6},{7,8,9}};
//    printf("%d\n", A[0][2]);
//    printf("%d\n", *(*(A+0)+1));
//
//    int c[3][2][2] = {{{1,2}, {3,4}},{{5,6},{7,8}}, {{9,10},{11,12}}};
//    printf("%d\n", c[0][0][1]);
//    printf("%d", *(*(*(c+0)+0)+1));
//    return 0;
//}

int main()
{
    int A[10],n,x,l,i,sum=0;
    int *p;
    p = A;
    printf("Enter the value of number\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for(int i=0; i<n; i++)
    {
    scanf("%d", &A[i]);
    }
    printf("Array elements are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", A[i]);
    }
    printf("Enter the element for search\n");
    scanf("%d", &x);
    for(i=0; i<n; i++){
    if(x == A[i])
    {
        l=1;
        break;
    }
    }
if(l == 1)
    printf("%d is present in the array\n", x);
else
    printf("%d is not present in the array\n", x);

    for(i=0; i<n; i++)
    {
        sum += *(A+i);
    }
    printf("Sum = %d", sum);






}
