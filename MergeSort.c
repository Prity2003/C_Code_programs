#include <stdio.h>

void merge(int A[], int mid, int low, int high)
{
    int i = low, j = mid+1, k = low;
    int B[100];

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            k++, i++;
        }
        else
        {
            B[k] = A[j];
            k++, j++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++, i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++, i++;
    }
    for(int i=low; i<=high; i++){
        A[i]=B[i];
    }
}
void mergesort(int A[], int low, int high)
{
    if (low < high)
    {
       int mid = (low+high)/2;

        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,mid,low,high);
    }
}
void printArray(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main()
{
    int A[] = {9,1,4,14,4,15,6};
    int n=7;
    printArray(A,n);
    mergesort(A,0,5);
    printArray(A,n);

    return 0;

}