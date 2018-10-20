#include<stdio.h>
main()
{
int a,s;
printf("enter a number");
scanf("%d",&a);
s=0;
while(a>0)
{
s=s+(a%10);
a=a%10;
}
printf("sum of digit%d",s);
return 0;
}

