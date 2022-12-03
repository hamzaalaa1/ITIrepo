#include<stdio.h>
#include<conio.h>

void main()
{
 int size = 0 ,i; 
 int arr[100]; 
 system("cls");
 printf("ente the size of arr :");
 scanf("%d",&size);
 for( i = 0 ; i < size ; i ++)
 {
 printf("enter arr[%d] = ",i);
 scanf("%d",arr+i);
}

for(i = 0 ; i < size ; i++)
{
printf("arr[%d] = %d\n",i ,arr[i]);
}
getch();
}
