
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fact(int);
int main(void)
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    int ans;
    ans = fact(number);
    printf("%d", ans);

    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);


}
