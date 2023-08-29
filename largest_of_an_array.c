#include<stdio.h>

int largest(int A[], int size)
{
    int i;
    int max=A[0];

    for(i=1; i<size; i++)
    {
        if(max<A[i])
            max = A[i];
    }

    return max;

}
int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
//    int i;

//    printf("Enter the  elements\n");
////    printf("Enter the value of N\n");
////    scanf("%d", &size);
//
//    for(i=0; i<10; i++){
////    printf("Enter the  elements\n");
//    scanf("%d", &A[i]);
    int size = sizeof(A)/sizeof(A[0]);
    printf("Largest element is: %d",largest(A,size));

    return 0;
}
