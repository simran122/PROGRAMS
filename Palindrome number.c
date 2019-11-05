#include<stdio.h>
int main()
{
int sum=0,digit;
int number,temp;
printf("\nEnter Any Positive Number :");
scanf("%d",&number);
temp=number;
while(temp>0)
{
digit=temp%10;
temp/=10;
sum=sum*10+digit;
}
if(number==sum)
printf("\n%d is Palindrome Number\n",number);
else
printf("\n%d Is Not A Palindrome Number\n",number);
return 0;
}
                                                                    
