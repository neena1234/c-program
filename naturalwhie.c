#include<stdio.h>
main()
{
int i,n,sum=0;

printf("enter the limit\n");
scanf("%d",&n);
do
{
sum=sum+i;
i++;
}
while(i<=n);

printf("sum of first n natural numbers is %d",sum);

}

