#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void dequeue()
{
    struct Node* temp=head;
    head =(*temp).next;
    free(temp);
    print();
}

void enqueue(int x)
{
    struct Node* temp=head;
    struct Node* temp2=(struct Node*)malloc(sizeof(struct Node*));
    printf("code here\n");
    (*temp2).data=x;
    (*temp2).next=NULL;
    if(head==NULL)
    {
        head=temp2;
        return;
    }
    while(temp!=NULL)
    {
        temp=(*temp).next;

    }
    (*temp).next=temp2;
    return;
}
void print()
{
    printf("The queue is \n");
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d",(*temp).data);
        temp=(*temp).next;
    }
    printf("\n");
}

main()
{
    enqueue(9);
    enqueue(5);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(6);
    dequeue();
    dequeue();
    print();
}
