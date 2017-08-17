#include<stdio.h>
#include<stdlib.h>
int addition(int *p,int *q)
{
    int c ;
    return *p+*q;
}
int subtraction(int *p,int *q)
{
 int c;
 return *p-*q;
}
int multplication(int *p,int *q)
{
    int c;
    return *p* *q;
}
int division(int *p,int *q)
{
    int c;
    return *p/ *q;
}
main()
{
    int x,a,b;
    int *p =&a ,*q =&b;
    printf("*************This is a program for calculation*********************\n");
    printf("enter a option from below\n1.adding\n2.subtraction\n3.Multiplication\n4.division\n5.exit\n ");
    scanf("%d",&x);
        printf("You are pressed :%d\n",x);
        if(x==5)
        {
         return;
        }
        else
        {

        printf("Now enter the numbers \n");
        scanf("%d %d",&a,&b);

    switch(x)
    {
        case 1:printf("%d",addition(p,q));
        break;
        case 2:printf("%d",subtraction(p,q));
        break;
        case 3:printf("%d",multplication(p,q));
        break;
        case 4:printf("%d",division(p,q));
        break;

       }
        }
}
