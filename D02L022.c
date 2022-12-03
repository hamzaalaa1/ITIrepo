#include<stdio.h>

int main()
{
 int sum , number;
  while(sum <= 100)
  { 
    	printf("enter the number :");
    	scanf("%d",&number);
        sum += number ;
  }	 
  printf(" sum exceeds 100 :) your sum is %d\n",sum);
}
