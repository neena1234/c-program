#include<stdio.h>
void main()
{
typedef int number;
number n,s,rev;
printf("enter a number\n");
scanf("%d",&n);
rev=0;
s=0;
while(n>0)
{
s=n%10;
rev=rev*10+s;
n=n/10;
printf("reverse is %d",rev);
}
}
