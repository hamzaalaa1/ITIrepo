#include<stdio.h>
#include<conio.h>
void main()
{
int i = 0; 
 int arr[] = {15,4,21,5,6,4,1};
 int min = arr[0],max;
 system("cls");
 printf("the min number in set of number \n");
 for(i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
 {
    if(arr[i] < min)
     {
       min = arr[i];
     }
    if(arr[i] > max)
     {
      max = arr[i];
     }
 }
 printf("the min number is :%d\n",min);
 printf("tha max number is :%d\n",max);
 getch();
}

