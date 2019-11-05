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
                                                                    
                                                                    
                                                                    
                                                                    
                                                                                    
                                                                    
