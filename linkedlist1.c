#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;

void insert()
{
    int a;
    printf("Enter the number you want to insert:\n");
    scanf("%d",&a);
    printf("You are entered:%d\n",a);
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    (*temp).data=a;
    (*temp).next=head;
     head=temp;
    printf("Insertion completed\n");
}
void insert_n(int a,int n)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    (*temp).data=n;
    (*temp).next=NULL;
    if(a==1)
    {
        (*temp).next=head;
        head=temp;
        printf("Insertion completed\n");
        return;
    }
    struct Node* temp2=head;
    int i;
    for(i=0;i<a-2;i++)
    {
        temp2=(*temp2).next;
    }
    (*temp).next=(*temp2).next;
    (*temp2).next=temp;
}
void delet()
{
    int a,i;
    struct Node*temp =head;
    printf("Enter the position you want to delete\n");
    scanf("%d",&a);
    if(a==1){
        head=(*temp).next;
        free(temp);
    }
    for(i=0;i<a-2;i++)
    {
        temp=(*temp).next;
    }
    struct Node* temp2=(*temp).next;
    (*temp).next=(*temp2).next;
    free(temp2);
    //print();
}
void print()
{
    int i;
    struct Node* temp=head;
    printf("The list is\n");
    while(temp!=NULL)
    {
        printf("%d\n",(*temp).data);
        temp=temp->next;
    }
    printf("\n");
}

main()
{

    int a,b,d;
    char c;
    printf("***********This is a program of linked list to add or remove and display ******************\n");
    printf("Enter the any option from below\n");
            printf("Do you want to continue(y/n)??\n");
            scanf("%c", &c);
            while(c=='y')
                {
                    printf("1.insert\n2.delete\n3.print\n4.insert to nth position\n");
                    scanf("%d",&a);
                    if (a==1)
                        {
                            insert();
                        }
                    else if(a==2)
                        {
                            delet();
                        }
                    else if(a==3)
                        {
                            print();
                        }
                     else if(a==4)
                     {
                         printf("Enter the position to insert:\n");
                         scanf("%d",&b);
                         printf("enter the number to be inserted:\n");
                         scanf("%d",&d);
                         insert_n(b,d);
                     }

                    printf("Do you want to continue:\n");
                scanf("%c", &c);
            }
}
