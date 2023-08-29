#include<stdio.h>

int main()
{
    int n=0, skip=6;

    while(n<10)
    {
        //printf("%d\n", n);
        n++;
        if(n != skip)
        {
            continue;
        }
        else
        {
           printf("%d\n", n);
        }
    }
    return 0;
}
