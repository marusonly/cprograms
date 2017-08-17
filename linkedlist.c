#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    (*temp).data=x;
    (*temp).next = head;
    head=temp;
}
void print()
{
    struct Node *temp = head;
    printf("The list is \n");
        while(temp!=NULL)
        {
            printf("The entered :%d\n",(*temp).data);
            temp=temp->next;
        }
    printf("\n");

}

main ()
{
    int i,a,b;
    //head = NULL;
    printf("Enter the number you want:\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("Enter the number that to added:\n");
        scanf("%d",&b);
        insert(b);
        print();
    }
}
