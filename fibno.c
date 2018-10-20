#include<stdio.h>
int fib(int,int);
int t=3,n;
int main()
{
int a=0,b=1,f,c;
printf("Enter the limit\n");
scanf("%d",&n);
printf("Fibonacci Series\n" );
printf("%d\n%d\n",a,b);
f=fib(a,b);
}
int fib(int a,int b)
{
int c,f;
if(t<=n)
{
c=a+b;
printf("%d\n",c);
t++;
f=fib(b,c);
return f;
}
}
