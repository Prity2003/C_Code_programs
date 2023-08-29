#include<stdio.h>

int main(void)

{

    char x[30]; //string(array of char.)

    char c; //searching char.

    int i;//for initialising loop


    printf("enter the string:");

    scanf("%s",x);

    printf("enter the char to which its position is to be found:");

    scanf(" %c",&c);

    for(i=0; x[i]!=NULL; i++)

    {

        if(x[i]==c)

        {

            printf("the position is:%d",i);

        }

    }

}
