#include<stdio.h>
#include<math.h>
#define SQRT(x) (x)*(x)

int main()
{
    int i,n,flag=1;
    printf("Enter the number\n");
    scanf("%d", &n);

 for(i=2; i<SQRT(n); i++)
 {
     if(n%i == 0){
        flag=0;
        break;
     }
 }
 if(n<=1)
    flag = 0;
 if(flag == 1){
    printf("Number %d is prime\n", n);
 }
 else{
    printf("Number %d is not prime\n", n);
 }

     return 0;
 }

