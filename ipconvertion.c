#include<stdio.h>
#include<stdlib.h>


void LongToIPv4 (long ip) {
  int a[4]={0,0,0,0};
  printf("%lu\n\n",sizeof(ip));
  printf("%ld\n\n",ip & 0xffffffff);
  a[0] = ((ip & 0xff000000) >> 24);
  a[1] = ((ip & 0x00ff0000) >> 16);
  a[2] = ((ip & 0x0000ff00) >> 8);
  a[3] = (ip & 0x000000ff);
    printf("%d:%d:%d:%d",a[0],a[1],a[2],a[3]);
}
int main()
{
    long ip = 168430090;
    LongToIPv4 (ip);
    return 0;
}
