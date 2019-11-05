#include<stdio.h>
int main()
{ int  i ,n ,sum=0,value;
float avg;

printf("Number of  n Integers:");
scanf("%d",&n);
printf("Enter  %d number",n);
for(i=1;i<=n;i++)
{
scanf("%d",&value);
 sum= sum+value;
}

printf("Sum of any number = %d",sum);
avg = sum/n;
printf("Average = %f",avg);
return 0;
}
