//Marks          Grade

//100 - 80     Distinction
//79 - 60      First Class
//59 - 40      Second Class
//< 40         Fail


#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks between 1 to 100\n");
    scanf("%d", &marks);

    switch(marks)
    {
    case 1:
        printf ("Distinction");
        break;
    case 2:
        printf ("First class");
        break;
    case 3:
        printf ("Second class");
        break;
    case 4:
        printf ("Fail");
        break;



    }
    return 0;
}
