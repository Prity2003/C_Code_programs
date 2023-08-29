#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the start number\n");
    scanf("%d", &n1);
    printf("Enter the end number\n");
    scanf("%d", &n2);

    printf("The numbers from %d to %d is :\n", n1, n2);

    for (int i = n1; i <= n2; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
