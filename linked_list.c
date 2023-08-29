#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void linkedlistTraversal(struct node* ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    struct node * fourth = (struct node *)malloc(sizeof(struct node)); 

head->data=7;
head->next=second;

second->data=11;
second->next=third;

third->data=13;
third->next=fourth;

fourth->data=15;
fourth->next=NULL;

linkedlistTraversal(head);

return 0;
}