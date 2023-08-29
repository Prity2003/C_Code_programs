#include<stdio.h>

int main()
{
    int n;

    for(n=1; n<=10; n++)
    {
        printf("%d\n", n);
        if(n==5){
            break;
        }
    }
    return 0;
}
