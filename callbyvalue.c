#include<stdio.h>
void swap(int a,int b)
{
int temp;
printf("\ninside the function value of a = %d and value of b = %d before swap\n",a,b);
temp = a;
a = b;
b = temp;
printf("value of a = %d and value of b = %d",a,b);
}
int main()
{
int x,y;
printf("enter value for x : ");
scanf("%d",&x);
printf("enter value for y : ");
scanf("%d",&y);
printf("\nbefore calling swap function\n");
printf("value of x = %d, value of y = %d",x,y);
swap(x,y);
printf("\n after returning from swap function");
printf("\n value of x = %d and value of y = %d",x,y);
return 0;
}
