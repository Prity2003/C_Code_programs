#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,r1,r2,c1,c2;
    int a[50][50], b[50][50], mul[50][50];

    printf("Enter the rows and columns of first matrix:\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the rows and columns of second matrix:\n");
    scanf("%d %d", &r2, &c2);

    if(c1!=r2)
    {
        printf("Multiplication of matrix is not possible\n");
    }
    else
    {
        printf("Enter the first matrix elements:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("element-[%d],[%d]: ", i,j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the second matrix elements:\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("element-[%d],[%d]: ", i,j);
                scanf("%d", &b[i][j]);
            }
        }
        printf("The first matrix is:\n");
        for(i=0; i<r1; i++)
        {
            printf("\n");
            for(j=0; j<c1; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\nThe second matrix is:\n");
        for(i=0; i<r2; i++)
        {
            printf("\n");
            for(j=0; j<c2; j++)
            {
                printf("%d ", b[i][j]);
            }
        }
        for(i=0; i<r1 ; i++)
            for(j=0; j<c1; j++)
                mul[i][j] = 0;
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
//                sum = 0;
                for(k=0; k<c1 && k<c2; k++)
                    mul[i][j] += a[i][k]*b[k][j];
//                mul[i][j] = sum;
            }
        }

        printf("\nThe multiplication of two matrices is: \n");
        for(i=0; i<r1; i++)
        {
            printf("\n");

            for(j=0; j<c2; j++)
            {
                printf("%d ", mul[i][j]);
            }
        }
    }

    return 0;
}
