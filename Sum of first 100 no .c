#include<stdio.h>
int main()
{
int sum=0,number;
number=1;
while(number<=100)
{
sum+=number;
number++;
}
printf("sum of first 100 postive integer number=%d\n",sum);
return 0;
}
