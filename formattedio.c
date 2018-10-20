#include<stdio.h>
void main()
{
int a,b,d,w,p;
float x;
double y;
char str[20];
printf("Formatted Input&Output\n");
printf("enter three integer numbers\n");
scanf("%d%*d%d",&a,&b);
printf("value in a is%d\n value in b is%d\n",a,b);
printf("enter a 4 digit number\n");
scanf("%4d",&d);
printf("%6d\n",d);
printf("%2d\n",d);
printf("%-6d\n",d);
printf("%06d\n",d);
printf("Enter two floating point numbers\n");
scanf("%f%f",&x,&y);
printf("Enter the field width\n");
scanf("%d",&w);
printf("Enter the field width\n");
scanf("%d",&w);
printf("Enter the precision\n");
scanf("%d",&p);
printf("%*.*f\n",w,p,x);
printf("%e\n",x);
printf("%-7.2f\n",y);
printf("%10.2e\n",y);
printf("Enter a string\n");
scanf("%s",str);
printf("%20s\n",str);
printf("%30.10s\n",str);
printf("%5s\n",str);
printf("%-20s\n",str);
printf("%5s\n",str);
}
