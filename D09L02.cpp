#include<iostream>
using namespace std;

class Base{
 protected :
    int a ; 
    int b ;
 public : 
 Base ()
 {
    a = b = 0;
 }
 Base(int n)
 {
    a=b=n;
 }
 Base(int x, int y)
{ 
    a = x ; b = y ;
 }
 void setA(int a)
 {
    this ->a = a;
 }
 void setB (int b)
 {
     this->b = b;
 }
 int getB()
 {
    return b; 
 }
 int getA()
 {
    return a ;
 }
 virtual int calculateSum()
 {
    return a + b;
 }
 virtual void disp()
 {
    cout <<"Function of Parent Class\n";
 }
};
class Derived : public Base 
{
    private:     
        int c ;
    public:
    Derived():Base()
    {
        c = 0;
    }
    Derived(int n ):Base(n)
    {
        c = n;
    }
    Derived(int x, int y, int z) : Base(x,y){ c = z ; }

     void disp()
     {
    cout << "funciton of child class";
    }
    int calculateSum()
    {
        return a + b + c ;
    }
};
int main()
{  
   Derived d(10,20,30);
  
    
   Base &obj =  d;
   cout <<  obj . calculateSum() <<endl;

}