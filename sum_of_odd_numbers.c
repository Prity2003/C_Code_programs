#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,n,sum=0,count=0;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    while(count<n)
    {
        if(i%2 == 1)
        {
            sum = sum+i;
            i = i+2;
            count++;
        }
    }

   printf("The sum of first %d odd numbers is: %d\n", n,sum);
   return 0;
}
