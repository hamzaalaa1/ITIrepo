#include <stdio.h>
#include<conio.h>
int main()
{
    int i = 1 ; int j = 1 ;
   
    system("cls");
     
    printf("   ");
  for(i = 1; i <= 10 ; i ++)
  {
     printf("%4d",i);
  }
   puts("\n");
   i = 1 ;
   j = 1 ;
  for(  i=1; i <= 10 ; i++)
  {
    printf("%d  ",i);
     for(j =1  ; j <= 10 ; j ++)
     printf("%4d",i*j);
     puts("");
  }
 getch();
}

