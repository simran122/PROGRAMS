#include<stdio.h>
int main()
{
int i,a,factorial = 1;
printf("enter a positive number for which you want factorial : ");
scanf("%d",&a);
for(i=a;i>=1;i--)
{
factorial = factorial * i;
}
printf("factorial of %d is %d\n",a,factorial);
return 0;
}
