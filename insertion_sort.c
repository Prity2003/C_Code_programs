#include<stdio.h>

void InsertionSort(int A[],int n)
{
    int i,hole,val;
    for(i=1;i<n;i++)
    {
        val=A[i];
        hole=i-1;
        while(hole>=0 && A[hole]>val)
        {
            A[hole+1]=A[hole];
            hole=hole-1;
        }
        A[hole+1]=val;
    }
}
void printArray(int A[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
}
printf("\n");
}

int main()
{
    int i,n;
    int A[] = {10,5,2,9,7,6};
    n=6;
    // printf("Enter the size of the array\n");
    // scanf("%d", &n);
    // printf("Enter the elements of an array\n");
    // for(i=0;i<n;i++)
    //     scanf("%d",&A[i]);
    printArray(A,n);
    InsertionSort(A,n);
    printArray(A,n);
}

