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



                                                                    
