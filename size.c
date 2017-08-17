#include<stdio.h>

main()
{
    char s[]="abcde";
    char r[]={'a','b','c','d','e','\0'};
    printf("size of s:%d\nsize of r:%d\n",sizeof(s),sizeof(r));
    printf("%s",r);
}
