#include<stdio.h>
#include<conio.h>
void main()
{
char c ;
 
 
system("cls");
gotoxy(25,10);
printf("choice A press a or A\n");
gotoxy(25,12);
printf("choice B press b or B\n");
gotoxy(25,14);
printf("choice B press c or C\n");
gotoxy(25,16);
printf("enter your choice :");

scanf("%c",&c);

switch(c)
{
case 'a':
case 'A':gotoxy(25,18);printf("your choice is %c\n",c); break ;
case 'b':
case 'B':gotoxy(25,18);printf("your choice is %c\n",c);break;
case 'c':
case 'C':gotoxy(25,18);printf("your choice is %c\n",c);break ;
default:gotoxy(25,18);printf("your choice not exist\n");
}
 getch();
}
