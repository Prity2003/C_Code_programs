#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

// struct node * DeleteAtFirst(struct node * head)
// {
//     struct node * ptr = head;
//     head=head->next;
//     free(ptr);
//     return head;
// }

// struct node * DeleteInBetween(struct node * head, int index)
// {
//     struct node * p = head;
//     struct node * temp = head->next;
//     int i=0;
//     while (i<index-1)
//     {
//         p=p->next;
//         temp=temp->next;
//         i++;
//     }
//     p->next=temp->next;
//     free(temp);
    
//     return head;
// }

// struct node * DeleteAtEnd(struct node * head)
// {
//     struct node * p = head;
//     struct node * temp = head->next;
    
//     while (temp->next != NULL)
//     {
//         p=p->next;
//         temp=temp->next;
//     }
//     p->next=NULL;
//     free(temp);
    
//     return head;
// }

struct node * DeleteAtIndex(struct node * head, int value)
{
    struct node * p = head;
    struct node * q = head->next;
    
    while (q->data != value && q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value)
    {
        p->next=q->next;
        free(q);
    }

    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = NULL;

    printf("Linked list before the deletion: \n");

    linkedlistTraversal(head);

    printf("\nLinked list after the deletion: \n");

    // head = DeleteAtFirst(head);
    // linkedlistTraversal(head);

    // head = DeleteInBetween(head, 2);
    // linkedlistTraversal(head);

    // head = DeleteAtEnd(head);
    head = DeleteAtIndex(head,2);
    linkedlistTraversal(head);
    return 0;
}