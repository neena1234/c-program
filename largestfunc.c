#include <stdio.h>
int large(int x,int y,int z);
void main()
{
int x,y,z,max;
printf("enter the numbers\n");
scanf("%d%d%d",&x,&y,&z);
max=large(x,y,z);
printf("%d is largest",max);
}
int large(int x,int y,int z)
{
if(x>y)
{
if(x>z)
return x;
return z;
}
else
{
if(y>z)
return y;
else
return z;
}
}

