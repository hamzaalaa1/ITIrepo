#include <stdio.h>
#include<conio.h>
#define size 7
int main()
{
    int number , y ,z; 
    int arr[size][size] = {0};
    int i = 0 ; 
    int j = size /2 ;
    system("cls");
     arr[i][j] = 1;
    for(number = 1 ; number < size*size ; number++)
    {
        if(number % size == 0)
        {
          i = i+1;
          i = i % size ;
          arr[i][j] = number+1 ;
        }else 
        {

            i = i-1;
            j = j-1;
            if(i < 0)
            {
                i+= size ; 
            }
            if(j < 0)
            {
                j += size ;  
            }
            
            arr[i][j] = number+1; 
        }
    }
    for(  y = 0 ; y < size ; y ++)
    {
        for (  z = 0 ; z < size ; z++)
        printf("%d\t",arr[y][z]);
        puts("");
    } 
     getch();
}

