#include<stdio.h>

//int main()
//{
//    int i,j,n=6;
//    for(i=n; i>1; i--)
//    {
//        for(j=1; j<i; j++)
//        {
//            printf("%d ", j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int i,j,n=6;
//    for(i=1; i<n; i++)
//    {
//        for(j=1; j<=i; j++)
//        {
//            printf("%c ", i+64);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int i,j,k,n=5,count=1;
//    for(i=1; i<n; i++)
//    {
//        for(j=n-i; j>=1; j--)
//            printf(" ");
//        for(k=1; k<=i; k++)
////            printf("* ",count);
//            printf("%d", count);
//            count++;
//        printf("\n");
//    }
//    return 0;
//}

//int fibo(int n);
//
//int main()
//{
//    int n,ans;
//    printf("Enter the Nth number\n");
//    scanf("%d", &n);
//    if(n<0)
//    {
//        printf("Not possible\n");
//    }
//    else{
//    ans = fibo(n);
//    printf("The %d number in fibonacci series is: %d", n,ans);
//    }
//    return 0;
//}
//
//int fibo(int n)
//{
//    if(n==0){
//        return 0;
//    }
//    else if(n==1)
//    {
//        return 1;
//    }
//    else{
//        return (fibo(n-1)+fibo(n-1));
//    }
//}


//int main() {
//   int i, j, rows;
//   printf("Enter the number of rows: ");
//   scanf("%d", &rows);
//   for (i = rows; i >= 1; --i) {
//      for (j = 1; j <= i; ++j) {
//         printf("* ");
//      }
//      printf("\n");
//   }
//   return 0;
//}

//int smallest(int a[], int size);
//
//int main()
//{
//    int a[] = {1,2,3,4,5,6};
//    int min = a[0];
//    int size = sizeof(a)/sizeof(a[0]);
//    min = smallest(a, size-1, a[0]);
//    printf("Smallest element is: %d", min);
//    return 0;
//}
//int smallest(int a[], int size)
//{
//    int min;
//    if(size>=0)
//    {
//        if(a[size]<min){
//            min = a[size];
//        }
//        size--;
//         smallest(a,size,min);
//    }
//    else
//        return (min);
//}

//void printarray(int a[], int n);
//
//int main()
//{
//    int i,n;
//    printf("Enter the size of the array\n");
//    scanf("%d", &n);
//    int a[n];
//    printf("Enter the array elements\n");
//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    printf("Array elements are:");
//    printarray(a,0,n);
//    return 0;
//}
//
//void printarray(int a[], int n)
//{
//    int i;
//   if(i>=n)
//        return;
//   printf("%d", a[i]);
//   else
//    printarray(a,i+1,n);
//}

//int main()
//{
//    int a[] = {5,7,9,10,15,20};
//    int n,z=6,i;
////    printf("Enter the value of z\n");
////    scanf("%d", &n);
//    int size = sizeof(a)/sizeof(a[0]);
//
//    for(i=0; i<size; i++)
//    {
//        if(a[i]>z)
//            {
//            i-1;
//     }
//        else if(a[i] <= z)
//        {
//            i;
//        }
//
//        else{
//            printf("Floor doesn't exist\n");
//        }
//    }
//
//    printf("Floor of %d is: %d", z,a[i]);
//
//    return 0;
//}


//int main()
//{
//    int A[] = {1,2,3,4,5};
//    int B[] = {4,8,10,9,7,5};
//    int i,j,k,n=5,m=6;
//    int flag=0;
//    int C[50];
//    for(i=0; i<n; i++)
//    {
//        for(j=0; j<m; j++)
//        {
//            if(A[i] == B[j])
//                flag=1;
//            break;
//        }
//    }
//    if(flag==0){
//        C[k] = A[i];
//        k++;
//    }
//    printf("Union is: %d", C[10]);
//    return 0;
//}

/*c program to find union and intersection of two sorted arrays*/

//int main()
//{
//    int A[] = {1,2,3,4,5};
//    int B[] = {7,8,9,10,12,15};
//    int i=0,j=0;
//    int size1 = sizeof(A)/sizeof(A[0]);
//    int size2 = sizeof(B)/sizeof(B[0]);
//
//    while(i<size1 && j<size2)
//    {
//        if(A[i] < B[j])
//        {
//            printf("%d ", A[i]);
//            i++;
//        }
//        else if(A[i] > B[j])
//        {
//            printf("%d ", B[j]);
//            j++;
//        }
//        else
//        {
//            printf("%d", A[i]);
//            i++;
//            j++;
//        }
//    }
//    while(i<size1)
//    {
//        printf("%d ", A[i]);
//        i++;
//    }
//    while(j<size2)
//    {
//        printf("%d ", B[j]);
//        j++;
//    }
////    printf("\nUnion = %d ", A[i],B[j]);
//    return 0;
//}

/*c program to find union and intersection of two unsorted array*/

int main()
{
    int i,j,k,flag;
    int A[] = {1,2,5,8,6};
    int B[] = {5,9,10,3,7};
    int C[50];
    int size1 = sizeof(A)/sizeof(A[0]);
    int size2 = sizeof(B)/sizeof(B[0]);

    for(i=0; i<size1; i++)
    {
        for(j=0; j<size2; j++)
        {
            if(A[i] == B[j])
            {
                flag=1;
                break;
            }

        if(flag == 0)
        {
            C[k]=A[i];
            j++;
        }
        }
    }
    printf("Union = %d", C[k]);
    return 0;
}
