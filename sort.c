#include<stdio.h>

void merge(int A[],int l,int r,int m)
{
    int nl=m-l+1;
    int nr=r-m;
    int i=0,k=0,j=0;
    int L[nl],R[nr];
    while(i<nl && j<nr)
    {
        if(L[i]==R[j])
        {
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<nl)
    {
        A[k]=L[i];
        i++;
        k++;
    }
    while(j<nr)
    {
        A[k]=R[j];
        j++;
        k++;
    }
}
void MergeSort(int A[])
