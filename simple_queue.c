#include<stdio.h>
#define SIZE 5
int Q[SIZE];
int front=-1;
int rear=-1;

void EnQueue(int x)
{
    if(rear>=SIZE-1)
    {
        printf("Overflow\n");
        return;
    }
    Q[++rear]=x;
    if(front==-1)
    {
        front=0;
    }
}
void DeQueue()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow\n");
        return;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
}
void print()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Queue is: ");
    for(int i=front; i<=rear; i++)
    {
        printf("%d ", Q[i]);
    }
    printf("\n");
}
int main()
{
    EnQueue(10);
    print();
    EnQueue(20);
    print();
    EnQueue(30);
    print();
    DeQueue();
    print();
    EnQueue(40);
    print();
}
