#include<stdio.h>

int main()
{
int *p;
p = (int*) malloc(sizeof(int));
*p = 100;
printf("%d\n", *p);
free(p);

p = (int *) malloc(5+sizeof(int));
for(int i=0; i<=5; i++)
{
    *(p+i) = i;
}
for(int i=0; i<=5; i++)
{
    printf("%d ", p[i]);
}
free(p);
return 0;
}
