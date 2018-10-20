#include<stdio.h>
int perfect(int s,int num);
void main()
{
int num,s;
printf("enter an integer number\n");
scanf("%d",&num);
s=perfect(s,num);
}
int perfect(int s,int num)
{
if(s==num)
printf("the given number %d is a perfect number",num);
else
printf("the given number %d is  not perfect",num);
return(0);
}


