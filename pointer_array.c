#include <stdio.h>

int age[] = { 16, 22, 26 };
char *name[] = { "Prity", "Khushbu", "Nilesh" };
int c;

int main(int i, char** j)
{
    for (c = 0; c < 3; c++)
    {
        printf("%s is %d years old\n", name[c], age[c]);
    }

    return 0;
}
