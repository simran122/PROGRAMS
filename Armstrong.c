#include<stdio.h>
int main()
{
int sum=0,number;
int  remainder,temp;
printf("Enter Any Positive Number :");

scanf("%d",&number);
temp=number;
while(temp!=0)
{
remainder=temp%10;
sum=sum+remainder*remainder*remainder;
temp/=10;
}                                                                   
if(sum==number)                                                    
printf("Armstrong Number\n");
else
printf("Not an Armstrong number\n");
return 0;
}
                                                                    
                                                                   
                                                                    
                                                                   
