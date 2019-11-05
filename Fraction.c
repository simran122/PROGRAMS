#include <stdio.h>
struct product
{
int numerator, denominator;
};
void main()
{
struct product V1,V2,V3;
printf("Enter the numerator of first fraction: ");
scanf("%d",&V1.numerator);
printf("Enter the denominator of first fraction: ");
scanf("%d",&V1.denominator);
printf("Enter the numerator of second fraction: ");
scanf("%d",&V2.numerator);
printf("Enter the denominator of secondfraction: ");
scanf("%d",&V2.denominator);
    
V3.numerator = V1.numerator * V2.numerator;
V3.denominator = V1.denominator * V2.denominator;
printf("Product= %d/%d",V3.numerator, V3.denominator);

}



                                                                    
