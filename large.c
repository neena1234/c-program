#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("%d is largest",a);
if((b>c)&&(b>a))
{
printf("%b is largest|n",b);
}
}
else
{
printf("%d is largest\n",c);
}
}

