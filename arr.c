#include<stdio.h>
main()
{
int a[4],sum=0,i;
printf("enter the elements");
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<4;i++)
{
printf("%d",a[i]);
}
for(i=0;i<4;i++)
{
sum=sum+a[i];
}
printf("sum=%d",sum);
}

