#include<stdio.h>
void selection_sort(int A[],int n)
{
    int i,j,min,temp;
    for(i=0; i<n-2; i++)
    {
        min=i;
        for(j=i+1; j<n-1; j++)
        {
            if(A[min]>A[j])
            {
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }

}
int main()
{
    int A[30],i,n;
    printf("Enter the size of an array\n");
    scanf("%d ", &n);
    printf("Enter the elements of an array\n");
    for(i=0; i<n; i++)
        scanf("%d ", &A[i]);
    selection_sort(A,n);
    printf("The sorted array is: ");
    for(i=0; i<n; i++)
        printf("%d",A[i]);
}
