#include<stdio.h>
void main()
{
int 1,n,d,i;
printf("enter the limit");
scanf("%d",&1);
printf("amstrong numbers are");
i=1;
while(i<=10)
{
int p,s;
n=i;
s=0;
while(n>0)
{
d=n%10;
p=d*d*d;
s=s+p;
n=n/10;
}
if(s==i)
{
printf("%d",i);
}
i++;
}
}
