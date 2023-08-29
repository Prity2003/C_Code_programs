#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node*head = 0;

void push(int x)
{
    struct node*temp=0;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data=x;
    temp -> next=head;
    head = temp;
}
void pop()
{
    if(head == 0)
    {
        printf("Error: stack underflow\n");
        return;
    }
    struct node*temp;
    temp = head;
    head = temp->next;
    free(temp);
}
void print()
{
    if(head == 0)
    {
        printf("Underflow\n");
        return;
    }
    printf("Stak is: ");
    struct node*temp = head;
    while(temp != 0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    push(10);
    print();
    push(20);
    print();
    pop();
    print();

}

Queue using linked list//

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node*front = 0;
struct node*rear = 0;

void EnQueue(int x)
{
    struct node*temp=0;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == 0)
    {
        printf("Error: overflow\n");
        return;
    }
    temp -> data = x;
    temp -> next = 0;
    if(front == 0 && rear == 0)
    {
        front = temp;
        rear =temp;
    }
    else
    {
        rear -> next=temp;
        rear = temp;
    }
}
void DeQueue()
{
    struct node*temp;
    temp = front;
    if(front == 0 && rear == 0)
    {
        printf("Error: underflow\n");
        return;
    }

    else if(front == rear)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        front = front -> next;
    }
    free(temp);
}
void print()
{
    if(front == 0 && rear == 0)
    {
        printf("Error: underflow\n");
        return;
    }
    printf("Queue is: ");
    struct node*temp;
    temp = front;
    while(temp != 0)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
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
}

