#include<stdio.h>
void strCpy(char *str1 , char *str2);
int main()
{
 char str[6] = "hamza";
 char str2[6] ="hhhhh";
 printf ("berfor copy S1 is \'%s\' S2 is\'%s\'\n",str,str2);
 strCpy(str,str2);
 printf ("berfor copy S1 \'%s\' S2 in\'%s\'\n",str,str2);
}
void strCpy(char *str1 , char *str2)
{
int i;
 for( i = 0;str1[i] !='\0';i++)
 {
   str1[i] = str2[i];
 }
 
}
