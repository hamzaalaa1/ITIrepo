#include<stdio.h>
#include<stdlib.h>
char *subS(char * str , int s);

int main()
{
   char *sptr; 
   sptr = subS("hamzaaaaa",5);
   printf("%s\n",sptr);
   free(sptr);
}
char *subS(char * str , int s)
{
  int i ;
  char *ptr =(char *)malloc(sizeof(char)*(s+1));
  for(i = 0 ; i < s;i++)
  {
    ptr[i] = str[i];
  }
  ptr[s+1] = '\0';
  return ptr ;
}