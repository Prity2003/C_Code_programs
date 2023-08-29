#include<stdio.h>

void printGoodmorning();
void printGoodafternoon();
void printGoodnight();

int main()
{
    printGoodmorning();
    return 0;
}

void printGoodmorning()
{
    printf("Good Morning!\n");
    printGoodafternoon();
}
void printGoodafternoon()

{
    printf("Good Afternoon!\n");
    printGoodnight();
}
void printGoodnight()
{
    printf("Good Night!\n");
}

