#include<stdio.h>
#include<conio.h>
typedef struct 
{
    int code ; 
    double salary ;
    char strName[];
}Emp ;
int main()
{
 Emp e ;
 system("cls"); 
 printf("enter the code :");
 scanf("%d",&e.code);
 printf("enter the Name :");
 scanf("%s",e.strName);
 printf("enter the  salary:");
 scanf("%lf",&e.salary);	
 printf("--------this is your data:)---------\n");
 printf("your name is :%s\n",e.strName);
 printf("your salary is :%.2f\n",e.salary);
 printf("your code is :%d\n",e.code);
 getch();
}

