#include<stdio.h>
#include<stdlib.h>
char *subS(char * str , int s,int e);

int main()
{
   char *sptr; 
   sptr = subS("hamzaaaaa",2,6);
   printf("%s\n",sptr);
   free(sptr);
}
char *subS(char * str , int s ,int e)
{
  char *ptr; 
  int i , j;
  ptr =(char *)malloc(sizeof(char)*((e-s)+1));
  for(i = s-1 ,j = 0; i < e;i++,j++)
  {
      ptr[j] = str[i];
  }
  ptr[e] = '\0';
  return ptr ;
}