#include<stdio.h>
int main()
{
 int digit, temp,  num,sum=0;
 printf("Enter any number: ");
 scanf("%d",&num);

 temp=num;
 while(temp>0)
{
 digit=temp%10;
 sum= sum+digit;
 temp=temp/10;
}
 printf("\nSum of digits of %d= %d\n",num,sum);
return 0;
}
