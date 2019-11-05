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
  
