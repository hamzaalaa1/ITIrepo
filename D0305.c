#include<stdio.h>
#include<stdlib.h>

typedef struct{
int ID ;
double salary ;
}Emp;
void takeDataInput(Emp *ePtr , int size);
void printEmpArray(Emp *ePtr , int size);
int main()
{
  int size  ; 
  printf("enter your size :");
  scanf("%d",&size);
  Emp *empPtr = (Emp*)calloc(size,sizeof(Emp));
  takeDataInput(empPtr,size);
  printEmpArray(empPtr,size);
}
void takeDataInput(Emp *ePtr , int size)
{
  int i  ; 
  for(i = 0 ; i < size ; i++)
  {
    printf("enter the data for emp %d\n",i+1);
    printf("enter the ID of Employee :");
    scanf("%d",&ePtr[i].ID);
    
    printf("enter the ID salary Employee :");
    scanf("%lf",&ePtr[i].salary);
  }
}
void printEmpArray(Emp *ePtr , int size)
{
 int i ; 
  for(i = 0 ; i < size ; i++)
  {
       printf("data for emp %d\n",i);
       printf("ID :%d\n",ePtr[i].ID);
       printf("salary :%f\n",ePtr[i].salary);
  }
}
