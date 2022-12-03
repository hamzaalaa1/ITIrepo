#include<stdio.h>
#include<conio.h>
typedef struct 
{
    int code ; 
    double salary ;
    char strName[];
}Emp ;
Emp takeInput(Emp );//take emp from user 
void printEmp(Emp );//print emp
int main()
{
 Emp emp;
 system("cls");
  
 printEmp(takeInput(emp));
 getch();
 return 0 ;
}

Emp takeInput( Emp e )//take emp from user 
{
 
 printf("enter the code :");
 scanf("%d",&e.code);
 printf("enter the Name :");
 scanf("%s",e.strName);
 printf("%s",e.strName);
 printf("enter the  salary:");
 scanf("%lf",&e.salary);
 
 return e; 
}
void printEmp(Emp e)//print emp
{
 printf("--------this is your data:)---------\n");
 printf("your name is :%s\n",e.strName);
 printf("your salary is :%.2f\n",e.salary);
 printf("your code is :%d\n",e.code);
 
}
