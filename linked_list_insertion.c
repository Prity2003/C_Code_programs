#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void linkedlistTraversal(struct node* temp)
{
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    
}

// struct node * InsertAtFirst(struct node*head, int data)
// {
//  struct node * temp = (struct node *)malloc(sizeof(struct node));
//  temp->next=head;
//  temp->data=data;
//  return temp;   
// }

// struct node * InserInBetween(struct node*head, int data, int index)
// {
//  struct node * temp = (struct node *)malloc(sizeof(struct node));
//  struct node * p = head;
//   int i=0;
//  while(i != index-1)
//  {
//      p = p->next;
//      i++;
//  }
//  temp->next=p->next;
//  temp->data=data;
//  p->next=temp;
//  return head;   
// }

// struct node * InsertAtEnd(struct node*head, int data)
// {
//  struct node * temp = (struct node *)malloc(sizeof(struct node));
//  struct node * p = head;
//  while(p->next != NULL)
//  {
//      p = p->next;
//  }
//  temp->next=NULL;
//  temp->data=data;
//  p->next=temp;
//  return head;   
// }

struct node * InsertAfterNode(struct node*head, struct node*prevNode, int data)
{
 struct node * temp = (struct node *)malloc(sizeof(struct node));
 
 temp->next=prevNode->next;
 temp->data=data;
 prevNode->next=temp;
 return head;   
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

printf("Before insrtion the linked list is: \n");
linkedlistTraversal(head);

printf("\nAfter insertion the linked list is: \n");
// head = InsertAtFirst(head,33);
// linkedlistTraversal(head);

// head=InserInBetween(head,56,2);
// linkedlistTraversal(head);

// head=InsertAtEnd(head,75);
// linkedlistTraversal(head);

head=InsertAfterNode(head,third,41);
linkedlistTraversal(head);

return 0; 
}