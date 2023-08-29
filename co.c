#include<stdio.h>
//int main()
//{
//    int x=10, y=15;
//    x= x++;
//    y = ++y;
//    printf("%d, %d\n", x,y);
//}

void main()
{
int iNo[3] = {10,20,30,40};
char cName[] = "exam";
char cMidd[] = "university";
strcpy(cName, cMidd);
printf("%d", iNo[0]);
printf("%s", cName);
}
