#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head=NULL;
void append(int n)
{
    Node p=(Node)malloc(sizeof(Node));
    p->data=n;
    p->next=NULL;

    if(head==NULL)
    {
        head=p;
    }
    else
    {
        Node *q=head;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }
}
void insertion(int n)
{
    Node p=(Node)malloc(sizeof(Node));
    p->data=n;
    p->next=NULL;

    Node *a=NULL,*b=head;
    while(b!=NULL && b->data!=38)
    {
        a=b;
        b=b->next;
    }
    if(b==NULL)
    {
        printf("VALUE NOT FOUND");
    }
    else
    {
        a->next=p;
        p->next=b;
    }
}
void print()
{
    Node *b=head;
    while(b!=NULL)
    {
        printf("%d ",b->data);
        b=b->next;
    }
    printf("\n");
}
void main()
{
    append(14);
    append(36);
    append(48);
    append(38);
    append(74);

    print();
    insertion(27);
    print();
}