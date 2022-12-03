#include<stdio.h>
#include<conio.h>
int main()
{
char c ; 
clrscr();

printf("%c\n",'c'); //for char ;
printf("for String %s\n","String");
printf("for integer %d\n",10);
printf("for Double %.2f\n",2.33333);
printf("for float %f \n",2.2222);
printf("for usigned int%u\n",22);
printf("for long %lu \n",12345);
printf("from int to hex%x\n",10);
printf("from int to oct %o\n",8);
scanf("%c",&c);
printf("ASCII CODE FOR %c is %d\n",c,c);
getch();
return 0;
}
