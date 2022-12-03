#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[3][4];
 int sum1 = 0 , sum2 = 0 ; 
 int avg = 0;  
 int j , i ;
 system("cls");
 for(  i = 0 ; i < 3 ;i++)
 {
   for(  j = 0 ; j < 4 ; j ++)
   {
     printf("entr arr[%d][%d] = ",i,j); 
     scanf("%d",&arr[i][j]);
   }
 } 
 // for printing sum and array 
 
 for(i = 0 ; i < 3 ; i++)
 {
 for(j = 0 ; j < 4 ; j++)
 {
   printf("%6	d",arr[i][j]);
   sum1 += arr[i][j];  
 }
 printf("%5d\n\n",sum1);
 }
 // avarage calcualtion
 for(i = 0 ; i<4 ; i++)
 {
   for(j = 0 ; j<3 ; j++)
  {
    sum2 += arr[j][i];
  }
  printf(" %5.1f",(float)sum2/3);	
  sum2 = 0 ; 
 }
 printf("\n");
 getch();
}
