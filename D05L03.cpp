#include<iostream.h>
#include<conio.h>

void swapInArr(int arr[] , int index1 , int index2);
void print(int arr[],int size);
int main()
{
    clrscr();
   int arr[5] = {1,2,3,4,5};
   print(arr,5);
   swapInArr(arr,1,2);
   print(arr,5);
}
void swapInArr(int arr[] , int index1 , int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
void print(int arr[],int size)
{
 for(int i = 0 ; i < size ;i++)
 cout<<arr[i]<<" ";

 cout<<endl;
}
