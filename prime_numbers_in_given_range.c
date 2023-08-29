#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n1=1,n2=100,flag,sqrt;

    for(i=1; i<=100; i++)
    {
        flag=1;
        for(j=2; j<sqrt(i); j++)
            if(j%i == 0)
        {
            flag=0;
            break;
        }
        if(flag == 1)
            printf("%d", i);
    }
}
