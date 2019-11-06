#include<stdio.h>
int main()
{
int a[10][10], b[10][10];
int n,m,i,j;
printf("Enter  Size Of Matrix a as m,n:");
scanf("%d%d",&m,&n);
printf("\nEnter Element Of Matrix A Row Wise \n",m,n);
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
