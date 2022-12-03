#include<stdio.h>
#include<conio.h>
int Power(int ,int );
int Power2 (int x , int y);
int result  = 1; 
int main()
{  
  int number ; 
  int power ; 
  system("cls");

  printf("%s","enter the number then the power :");
  scanf("%d%d",&number , &power);
  if(power < 0)
  {
      printf("the power of with recursion %d to %d is :%f\n",number , power , (double)1/Power(number , power));
      printf("the power of with loop %d to %d is :%d\n"     ,number , power , (double)1/Power2(number , power));
      return 0;
  }
  printf("the power of with recursion %d to %d is :%d\n",number , power , Power(number , power));
  printf("the power of with loop %d to %d is :%d\n",number , power , Power2(number , power));
  getch();
  return 0 ; 
}
int Power(int x,int y)
{
 if(result == 1 )
 {
   result = x ;
 }
 
  if(y == 0)
  return 1; 
  if(y == 1 )
  return result ; 
  
  result *= x ;
  return Power(x,--y);
}
int Power2 (int x , int y)
{
 int result = 1 ;
 for(; y>=1 ;y--)
 {
   result *= x;
 } 
return result ;
}
