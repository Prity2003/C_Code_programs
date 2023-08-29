////selection sort//
#include<stdio.h>

void selectionSort(int A[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-2;i++)
    {
        min=i;
        for(j=i+1;j<n-1;j++)
        {
            if(A[min]>A[j])
                min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
}
void print(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
}
int main()
{
    int i,n,A[50];
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    printf("Enter the elements of an array\n");
    for(i=0;i<n;i++)
        scanf("%d",&n);
//    print(A,n);
    selectionSort(A,n);
    print(A,n);
}

//#include <stdio.h>
//
//void selection(int arr[], int n)
//{
//    int i, j, small;
//
//    for (i = 0; i < n-1; i++)    // One by one move boundary of unsorted subarray
//    {
//        small = i; //minimum element in unsorted array
//
//        for (j = i+1; j < n; j++)
//        if (arr[j] < arr[small])
//            small = j;
//// Swap the minimum element with the first element
//    int temp = arr[small];
//    arr[small] = arr[i];
//    arr[i] = temp;
//    }
//}
//
//void printArr(int a[], int n) /* function to print the array */
//{
//    int i;
//    for (i = 0; i < n; i++)
//        printf("%d ", a[i]);
//}
//
//int main()
//{
//    int a[] = { 12, 31, 25, 8, 32, 17 };
//    int n = sizeof(a) / sizeof(a[0]);
//    printf("Before sorting array elements are - \n");
//    printArr(a, n);
//    selection(a, n);
//    printf("\nAfter sorting array elements are - \n");
//    printArr(a, n);
//    return 0;
//}
