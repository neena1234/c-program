#include<stdio.h>
int reverse(int);
void main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);
int b=reverse(a);
printf("reverse=%d",b);
}
reverse(int x)
{
int y=0;
while(x)
{
y=y*10+x%10;
x=x/10;
}
return y;
} 

