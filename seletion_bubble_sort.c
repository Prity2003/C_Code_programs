#include<stdio.h>
// void selectionSort(int A[],int n)
// {
//   int i,j,min,temp;
//   for(i=0; i<=n-2; i++)
//   {
//       min=i;
//       for(j=i+1; j<=n-1; j++)
//       {
//           if(A[min]>A[j])
//            min=j;
//       }
//       temp=A[i];
//       A[i]=A[min];
//       A[min]=temp;
//   }
// }


void Bubblesort(int A[],int n)
{
    int i,j,k,temp;
    for(i=0; i<=n-2; i++)
    {
        for(j=0; j<=n-i-1; j++)
        {
            if(A[i]>A[j+1])
            {
                temp=A[i];
                A[i]=A[j+1];
                A[j+1]=temp;
            }
        }
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
   int A[] = {2,7,4,9,3,6,5};
   n=7;
   printArray(A,n);
//    selectionSort(A,n);
   Bubblesort(A,n);
   printArray(A,n);

   return 0;
   
}
 


