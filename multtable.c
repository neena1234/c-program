#include<stdio.h>
main()
{
int n,p,i;
printf("enter anumber\n");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
p=i*n;
printf("%d*%d=%d\n",i,n,p);
}
}
