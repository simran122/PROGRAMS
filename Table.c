#include<stdio.h>
int main()
{
int i,n,d;
printf("enter number:");
scanf("%d",&d);
for(i=1;i<=20;i++)
{
n=d*i;
printf("%d X %d = %d\n",d,i,n);
}
return 0;
}
