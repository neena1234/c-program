#include<stdio.h>
void main()
{
int x,n;
printf("Enter the number\n");
scanf("%d",&n);
x=fact(n);
printf("factorial=%d",x);
}
int fact(int n)
{
int factorial;
if(n==1)
{
return(1);
}
else
{
factorial=n*fact(n-1);
return(factorial);
}
}

