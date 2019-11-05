#include<stdio.h>
#include<string.h>
struct employe
{
int code;
char name[30];
char department[50];
float salary;
};
void main()
{ 
struct employe employee;
printf("Enter Employee Code:\n");
scanf("%d",&employee.code);
printf("Enter Employee's Name:");
scanf("%[^\n]%*c",employee.name);
printf("Enter Employee's Department:");
scanf("%[^\n]%*c",employee.department);
printf("Enter Employee's salary:\n");
scanf("%f",&employee.salary);
printf("\n\n Particulars of Employee:");
printf("\n Employee's code:%d",employee.code);
printf("\n Employee's Name:%s",employee.name);
printf("\n Employee's Department:%s",employee.department);
printf("\n Employee's Salary:%f",employee.salary);
}
                                                                    




                                                                    
