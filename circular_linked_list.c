#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void linkedlistTraversal(struct node* head)
{
    struct node * ptr=head;

    do{
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }while (ptr != head);
    
}

// struct node* InsertAtFirst(struct node*head,int data)
// {
//      struct node * ptr = (struct node *)malloc(sizeof(struct node));
//      ptr->data=data;

//      struct node*p = head->next;
//      while(p->next != head)
//      {
//          p=p->next;
//      }
//      p->next = ptr;
//      ptr->next = head;
//      head=ptr;

//      return head;
// }

// struct node * InsertInBetween(struct node*head, int data, int index)
// {
//  struct node * ptr = (struct node *)malloc(sizeof(struct node));
//  struct node * p = head;
//   int i=0;
//  while(i != index-1)
//  {
//      p = p->next;
//      i++;
//  }
//  ptr->next=p->next;
//  ptr->data=data;
//  p->next=ptr;

//  return head;   
// }

// struct node * InsertAtEnd(struct node*head, int data)
// {
//  struct node * ptr = (struct node *)malloc(sizeof(struct node));
//  struct node * p = head;
//  while(p->next != head)
//  {
//      p = p->next;
//  }
//  ptr->next=head;
//  ptr->data=data;
//  p->next=ptr;

//  return head;   
// }

struct node * InsertAfterNode(struct node*head, struct node*prevNode, int data)
{
 struct node * ptr = (struct node *)malloc(sizeof(struct node));
 
 ptr->next=prevNode->next;
 ptr->data=data;
 prevNode->next=ptr;

 return head;   
}

int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    struct node * fourth = (struct node *)malloc(sizeof(struct node)); 

head->data=4;
head->next=second;

second->data=3;
second->next=third;

third->data=6;
third->next=fourth;

fourth->data=1;
fourth->next=head;

printf("circular linked list before insertion: \n");
linkedlistTraversal(head);

printf("\ncircular linked list after insertion: \n");

// head = InsertAtFirst(head,40);
// head = InsertInBetween(head,30,2);
// head = InsertAtEnd(head,50);
head = InsertAfterNode(head,second,60);
linkedlistTraversal(head);


return 0;
}