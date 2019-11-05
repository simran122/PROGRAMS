#include<stdio.h>
void swap(int*, int*);
void main()
{
  int x,y;
  printf("\nEnter the value of x: ");
  scanf("%d",&x);
  printf("\nEnter the value of y: ");
  scanf("%d",&y);
  printf("\nBefore calling swap function\n");
  printf("\nValue of x=%d, value of y=%d\n",x,y);
  swap(&x,&y);
  printf("\nAfter returning from swap function");
  printf("\nValue of x=%d, Value of y=%d",x,y);
}
  void swap(int*a, int*b)

{
  int temp;
  printf("\nInside the function");
  printf("\nValue of *a=%d, Value of *b=%d Before swap\n",*a,*b);
  temp=*a;
  *a = *b;
  *b = temp;
  printf("\nValue of *a=%d, Value of *b= %d after swap\n",*a, *b);
}
