#include<stdio.h>
main()
{
int i=10,*ip;
float f=3.4,*fp;
char c='a',*cp;
printf("i=%d\n",i);
printf("f=%f\n",f);
printf("c=%c\n",c);
ip=&i;
printf("address of i=%u\n",ip);
printf("value of i=%d\n",*ip);
fp=&f;
printf("address of f=%u\n",fp);
printf("value of f=%f\n",*fp);
cp=&c;
printf("address of c=%u\n",cp);
printf("value of c=%c\n",*cp);
}




