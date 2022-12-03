#include<stdio.h>
#include<conio.h>
int main()
{int i = 1 , j = 1 ,c,x;
system("cls");
for(i = 10,c=2  ; i >= 1 ; i-- ,c+=3)
{
   gotoxy(15+c,5);
   printf("%d",i);
}
for(i = 10 , c =2 ; i >= 1 ; i-- , c+=2)
{
   gotoxy(14,5+c);
   printf("%d",i);
}
 
 for(i = 10 , x = 7; i >=  1 ; i-- , x += 2)
{
  
  for(j = 10,c=1 ; j >= 1 ; j--,c+=3)
  {
    gotoxy(16+c,x);
    printf("%d",i*j);
  }
  puts("");
 }
   getch();	
    return 0 ;
}
