#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int Q[SIZE];
int front=-1;
int rear=-1;

void EnQueue(int x)
{
    if(front==(rear+1)%SIZE)
    {
        printf("Overflow\n");
        return;
    }
    rear=(rear+1)%SIZE;
    Q[rear]=x;
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
    else
    {
        Q[front]=0;
        front=front+1;
//        int x=Q[front];
//        front=(front+1)%SIZE;
//        printf("%d ",x);
    }
}

void print()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow\n");
        return;
    }
    if(front>rear)
    {
        printf("Queue is: ");
        for(int i=front; i<SIZE; i++)
        {
            printf("%d ",Q[i]);
        }
        for(int k=front; k<=rear; k++)
        {
            printf("%d ",Q[k]);
        }
        printf("\n");
    }
    else
    {
        printf("Queue is: ");
        for(int j=front; j<=rear; j++)
        {
            printf("%d ", Q[j]);
        }
        printf("\n");
    }
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
}
