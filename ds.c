//#include<stdio.h>
//#define SIZE 5
//int front = -1;
//int rear = -1;
//int Q[SIZE];
//
//void EnQueue(int x)
//{
//    if(rear >= SIZE-1)
//    {
//        printf("Error : Queue is full\n");
//        return;
//    }
//    Q[++rear] = x;
//
//    if(front == -1)
//    {
//        front=0;
//    }
//}
//
//void DeQueue()
//{
//    if(front == -1 && rear == -1)
//    {
//        printf("Error: Queue is Empty\n");
//        return;
//    }
//    else if(front == rear)
//    {
//        front = -1;
//        rear = -1;
//    }
//    else
//    {
//        front++;
//    }
//}
//void print()
//{
//    if(front == -1 && rear == -1)
//    {
//        printf("Error : Queue is Empty\n");
//        return;
//    }
//    printf("Queue: ");
//
//    for(int i=front; i<=rear; i++)
//    {
//        printf("%d ", Q[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//    EnQueue(10);
//    print();
//    EnQueue(20);
//    print();
//    DeQueue();
//    print();
//}

//circular Queue program//

#include<stdio.h>
#define SIZE 5
int front = -1;
int rear = -1;
int Q[SIZE];

void En
