#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void takeValues(int *arr ,int size);
void printArray(int *arr,int size);
int main()
{
  int size ;
  int *arr;
  system("cls");
  printf("enter the size of the array :");
  scanf("%d",&size);
  *arr = (int *)malloc(sizeof(int)*size);
  takeValues(arr,size);
  free(arr);	
  getch();
}
void takeValues(int *arr ,int size)
{
int i; 
  for(  i = 0 ; i < size ; i++)
  {
    printf("enter the element number %d:",i+1);
    scanf("%d",arr+i);
  }
  printArray(arr,size);
}
void printArray(int *arr,int size)
{
int i ;
  for(i = 0 ; i < size ; i++)
  {
   printf("element number %d:%d\n",i+1,arr[i]);
  }
  puts("");
}
