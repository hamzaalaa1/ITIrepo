#include<stdio.h>

int indexOf(char *str , char ch);
int main()
{
  printf("%d\n",indexOf("hamza",'t'));
}
int indexOf(char *str , char ch)
{
    int count = 0 ;
   while (str[count++] != '\0')
   {
        if(str[count] == ch)
        return count ;
   }
return -1;
       
}