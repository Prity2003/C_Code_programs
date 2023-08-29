#include<stdio.h>
int LinearSearch(int A[],int size,int x)
{
    for(int i=0; i<size; i++)
    {
        if(x==A[i])
            return i;
        else
            return -1;
    }
}

int main()
{
    int x;
    int A[] = {1,5,9,7,6,3,6,4};
    int size = sizeof(A)/sizeof(int);
    // printf("Enter the element to be found from the array\n");
    // scanf("%d",&x);
    x=3;
    int searchIndex = LinearSearch(A,size,3);
    // if(result == -1)
    //     printf("%d is not present in the array\n",x);
    // else
        printf("The eleme %d is present at the index = %d\n",x,searchIndex);

    return 0;


}



