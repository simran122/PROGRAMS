1. #### Program to add two numbers

#include<stdio.h>  
int main()  
{  
int a,b,sum;  
printf("enter two numbers:");  
scanf("%d %d",&a,&b);  
sum=a+b;  
printf("%d",sum);  
return 0;  
}  

2. #### Program to find average of n numbers

#include<stdio.h>  
int main()  
{   
int  i ,n ,sum=0,value;  
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

3. #### Program to print weekdays using switch statement

#include<stdio.h>  
int main()  
{  
int code;  
printf("Enter Weekdays In Number :");  
scanf("%d",&code);  
if(code==1)  
printf("Monday");  
else if (code==2)  
printf("Tuesday");  
else if(code==3)  
printf("Wednesday");  
else if(code==4)  
printf("Thursday");  
else if(code==5)  
printf("Friday");  
else if(code==6)  
printf("Saturday");  
else if(code==7)  
printf("Sunday");  
else  
printf("Invalid Output");  
return 0;  
}  


4. #### Program to find whether the number is even or odd

#include<stdio.h>  
int main()  
{
int a,b;  
printf("Enter A Number  :");  
scanf("%d",&a);  
if (a%2==0)  
printf(" a is even ");  
else  
printf(" b is odd ");   
return 0;  
}   


5. #### Program to print the table using loop

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


6. #### Program to find whether the number is armstrong or not

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
sum=sum+remainder * remainder * remainder;  
temp/=10;  
}                                                                     
if(sum==number)                                                      
printf("Armstrong Number\n");  
else  
printf("Not an Armstrong number\n");  
return 0;  
}  


7. #### Program to print a calculator using puts

#include <stdio.h>  
int main()  
{  
puts(" _______________ \n");  
puts("|_______________|\n");  
puts("| 1 | 2 | 3 |   |\n");                                          
puts("|___|___|___|   |\n");  
puts("| 4 | 5 | 6 | + |\n");  
puts("|___|___|___|___|\n");  
puts("| 7 | 8 | 9 | - |\n");  
puts("|___|___|___|___|\n");  
puts("|    0      | * |\n");  
puts("|___________|___|\n");                                                             
}  


8. #### Program for bubble short

#include<stdio.h>  
int main()  
{  
int a[20],i,n,k,temp;  
printf("\n enter size of array:");  
scanf("%d",&n);   
printf("\n enter %d elements of array \n",n);  
for(i=0;i<n;i++)  
scanf("%d",&a[i]);  
for(k=0;k<n-1;k++)  
{   
  
for(i=0;i<n-k-1;i++)  
{  
if(a[i]>a[i+1])  
{  
temp=a[i];  
a[i]=a[i+1];  
a[i+1]=temp;  
}  
}  
}  
printf("\n array of elements after sorting\n");  
for(i=0;i<n;i++)  
{  
printf("%d",a[i]);  
printf("\n");  
}  
return 0;  
}  


9. #### Program for binary search

#include<stdio.h>  
int main()  
{  
int i,low,high,mid,n,key,array[100];  
printf("Enter number of elements n");  
scanf("%d",&n);  
printf("Enter %d integers\n",n);  
  
for(i=0;i<n;i++)  
scanf("%d",&array[i]);  
printf("Enter value to find n");  
scanf("%d",&key);  
low=0;  
high=n-1;  
mid=(low+high)/2;  
while(low<=high)  
{  
if(array[mid]<key)  
low=mid+1;  
else if(array[mid]==key)  
{  
printf("%d found at location %d.n",key,mid+1);  
break;  
}  
  
else  
  
high=mid-1;  
mid=(low+high)/2;  
}  
  
if(low>high)  
printf("Not found! %d is not present in the list.n",n,key);  
return 0;  
}  


10. #### Program for a factorial of number

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

11. #### Program for fizzbuzz

#include<stdio.h>  
int main()   
{   
int i;   
for(i=1;i<=50;i++)  
   
if(i%3==0 && i%5==0)  
printf("FizzBuzz\n");  
   
 else if(i%3==0)   
printf("Fizz\n");  
else if(i%5==0)  
printf("Buzz\n");  
else   
printf("%d\n",i);  
return 0;   
}   


12 . #### Program for  sum of first 100 number

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

13. #### Program to find greater of two numbers

#include<stdio.h>  
int main()  
{  
int a,b;  
printf("Enter Any 2 Number :");  
scanf("%d%d",&a,&b);  
if(a>b)  
{  
printf("a is greater ");   
}  
else  
{   
printf("b is greater ");  
}  
return 0;  
}  

14. #### Program to find greater of 3 numbers

#include<stdio.h>  
int main()  
{  
int a,b;  
printf("Enter Any 2 Number :");  
scanf("%d%d",&a,&b);  
if(a>b)  
{  
printf("a is greater ");  
}  
else  
{  
printf("b is greater ");  
}    
return 0;  
}  

15. #### Program to find gcd of numbers

#include<stdio.h>  
int main()   
{   
int m,n,r=1;   
printf("\nEnter Value For m,n");  
scanf("%d,%d",&m,&n);   
while(r!=0)  
{    
r=n%m;  
n=m;   
m=r;  
}  
printf("\nGCD=%d\n",n);  
return 0;  
}                                                                      
                                                                    

16. #### Program to find whether the year is leap year or not

#include<stdio.h>     
int main()     
{      
int year;     
printf("Enter any year: ");     
scanf("%d",&year);      
if(year%4==0)      
printf("%d is a leap year",year);    
else    
printf("%d is not a leap year",year);   
return 0;    
}   

                                                                    
17. #### Program for linear search

#include<stdio.h>   
int main()   
{         
int a[100],search,c,n;    
printf("Enter no of element in array\n");   
scanf("%d",&n);    
printf("Enter %d integer\n",n);   
for(c=0;c<n;c++)    
scanf("%d",&a[c]);    
printf("Enter A  Number To Search\n");    
scanf("%d",&search);   
for(c=0;c<n;c++)  
{                                                                      
if(a[c]==search)                                                      
{                                                                     
printf("%d is present at  %d location",search,c+1);                   
break;                                                                              
}                                                                     
}   
if(c==n)   
printf("%d Is Not Present At Location\n",search);   
return 0;   
}    

18. #### Program for matrix addition
 
#include<stdio.h>  
int main()   
{  
int A[10][10], B[10][10], sum[10][10];   
int n,m,i,j;   
printf("Enter  Size Of Matrix a as m,n:");   
scanf("%d%d",&m,&n);    
printf("\nEnter Element Of Matrix A  \n");   
for(i=0;i<m;i++)   
{   
for(j=0;j<n;j++)   
{  
scanf("\n%d",&A[i][j]);   
}   
}   
printf("\nEnter Element Of Matrix B \n");   
for(i=0;i<m;i++)   
{  
for(j=0;j<n;j++)   
{  
scanf("\n%d",&B[i][j]);  
}  
}   
printf("\n Sum of Two Matrix\n");  
for(i=0;i<m;i++)  
{   
for(j=0;j<n;j++)  
{   
sum[i][j]=A[i][j]+B[i][j];   
printf("%d\t",sum[i][j]);  
}    
printf("\n");  
}   
return 0;  
}  

19. #### Program for transpose of matrix

#include<stdio.h>   
int main()  
{  
int a[10][10], b[10][10];   
int n,m,i,j;   
printf("Enter  Size Of Matrix a as m,n:");  
scanf("%d%d",&m,&n);   
printf("\nEnter Element Of Matrix A Row Wise \n",m&n);  
for(i=0;i<m;i++)   
{  
for(j=0;j<n;j++)   
{    
scanf("%d",&a[i][j]);  
}   
}  
for(i=0;i<m;i++)  
{   
for(j=0;j<n;j++)  
{   
b[j][i]=a[i][j];   
}   
}   
printf("\n Tranpose is \n\n");     
for(i=0;i<n;i++)   
{   
for(j=0;j<m;j++)  
{  
printf("%d ",b[i][j]);  
}  
printf("\n");  
                                                                      
}   
}  

20. #### Program to find the sum of digits  of a number

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



                                                                                                                                        
                                                                    
                                                                    
                                                                                    
                                                                                                                                        
                                                                    
                                                                    
                                                                                    
                                                                    



           



                                                                    
                                                                   


