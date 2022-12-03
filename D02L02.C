#include<stdio.h>
#include<conio.h>
int main()
{int i = 1 , j = 1 ,c,x;
system("cls");
for(i = 1,c=2  ; i <= 10 ; i++ ,c+=3)
{
   gotoxy(15+c,5);
   printf("%d",i);
}
for(i = 1 , c =2 ; i <= 10 ; i++ , c+=2)
{
   gotoxy(14,5+c);
   printf("%d",i);
}
 
 for(i = 1 , x = 7; i <=  10 ; i ++ , x += 2)
{
  
  for(j = 1,c=1 ; j <= 10 ; j++,c+=3)
  {
    gotoxy(16+c,x);
    printf("%d",i*j);
  }
  puts("");
 }
   getch();	
    return 0 ;
}
