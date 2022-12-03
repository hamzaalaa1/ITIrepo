#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void freeData(char **pPtr ,int size);
void printArr(char **arr ,int size);
int main()
{
int size ,arrSize ,i;
char **pPtr;
system("cls");
printf("enter the size of the array :");
scanf("%d",&size);
pPtr = (char **)malloc(sizeof(char *)*size);
for(i= 0 ; i < size ;i++)
 {
    printf("enter the size of the String%d :",i+1);
    scanf("%d",&arrSize);
   *(pPtr+i) = (char *)malloc(sizeof(char)*(arrSize+1));
    printf("enter the string :");
    scanf("%s",*(pPtr+i));
 
    }
    printArr(pPtr,size);
    freeData(pPtr,size);
    getch();
}
void freeData(char **pPtr ,int size)
{
 int i ; 
  for(i = 0 ; i < size ; i++)
  {
   free(*(pPtr+i));
  }
}
void printArr(char **arr ,int size)
{
 int i;
 for(i = 0 ; i < size; i++)
  printf("string[%d] is :%s\n",i,arr[i]);
}
