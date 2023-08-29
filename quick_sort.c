#include <stdio.h>

int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int pIndex = start;
    int temp;

    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            temp = a[i];
            a[i] = a[pIndex];
            a[pIndex] = temp;
            pIndex++;
        }
    }
    temp = a[pIndex];
    a[pIndex] = a[end];
    a[end] = temp;

    return pIndex;
}

void QuickSort(int a[], int start, int end)
{
    int pIndex;
    if(start<end)
    {
        pIndex = partition(a,start,end);
        QuickSort(a,start,pIndex-1);
        QuickSort(a,pIndex+1,end);
    }

}

void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[] = {9,4,3,2,1,6};
    int n=6;
    printArray(a,n);
    QuickSort(a,0,n-1);
    printArray(a,n);
    
    return 0;
}
