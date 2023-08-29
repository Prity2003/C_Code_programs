#include<stdio.h>

int main()
{
    int i,n,temp;
    int A[10];
    printf("Enter the value of N\n");
    scanf("%d", &n);
//     printf("Enter the elements of an array\n");

    for(i=0; i<n; i++){
    printf("Enter the elements of an array\n");
    scanf("%d", &A[i]);
    }

    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
//            scanf("%d", &A[i]);
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("Ascending order is:\n");
    for(i=0; i<n; i++)
        printf("%d ",n);
    return 0;
}
