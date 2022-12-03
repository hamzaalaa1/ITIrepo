#include<stdio.h>
#include<conio.h>

void swap(int *number1 , int *number2);
int main()
{
 int number1 = 0 ; 
 int number2 = 0 ;
 system("cls");
 printf("enter number1:");
 scanf("%d",&number1);
 printf("enter number2 :");
 scanf("%d",&number2);
  
 printf("before swap number1 %d number2 %d\n",number1,number2);
 swap(&number1,&number2);
 printf("after swap number1 %d number2 %d\n",number1 , number2);
 getch();
}
void swap(int *number1 , int *number2)
{
   int temp;
   system("cls");
   temp = *number1 ;
  *number1 = *number2;
  *number2 = temp ;
   getch();
}
