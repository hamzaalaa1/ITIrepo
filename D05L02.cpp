#include<iostream.h>
#include<conio.h>
void swapBref(int & number1 , int & number2);
int main()
{
    clrscr();
    int number1 ,number2; 
    cout <<"inter number1 :";
    cin>>number1;
    cout <<"inter number2 :";
    cin>>number2;
    cout<<"before swap  number1 "<<number1<<"  number2 "<<number2<<endl;
    swapBref( number1 , number2);
    cout<<"after  swap  number1 "<<number1<<" number2 "<<number2<<endl;
    getch();
} 
void swapBref(int & number1 , int & number2)
{
    int temp = number1;
    number1  = number2;
    number2 = temp ; 
}