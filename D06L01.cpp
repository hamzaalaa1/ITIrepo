#include<iostream.h>
#include<conio.h>
//using namespace std;
class Complex 
{
    private :
        float real ; 
        float imag ;
        char u; 
    public  :
         Complex();
         Complex(float r,char u);
         Complex(float r, float i,char u);
         ~Complex();
         void setReal(float r);
         void setImag(float i);
         float getReal();
         float getImage();
         void setAll();
         void setAll(float f);
         void setAll(float r ,float i);
         Complex add(Complex c);
         Complex sub(Complex c);
         void print();
};
int main()
{
  clrscr();
  Complex myComp1, myComp2(3, 4,'A'), resultComp(5,'B') ;
  myComp1.setReal(7) ;
  myComp1.setImag(2) ;
  resultComp = myComp1.add(myComp2) ;
  cout<<"the value :";
  resultComp.print() ;
  resultComp = myComp1.sub(myComp2) ;
  resultComp.print() ;
  myComp1.setAll();
  myComp1.print();
  myComp1.setAll(3.3);
  myComp1.print();
  myComp1.setAll(3.3,4.4);
  myComp1.print();
 

  getch();
  return 0 ;
}

    Complex::Complex()
{
    real = imag = 0 ; 
    cout<<"this is the default constructor \n";
}
    Complex::Complex(float r ,float i ,char uu)
{
     u = uu ;
     real = r; 
     imag = i ;    
     cout <<"this is two param constructor"<<" "<<u<<endl;
}
    Complex::Complex(float r,char uu)
{
     u = uu ;
     real = imag = r ;
     cout<<"single parameter constructor"<<" "<<u<<endl;
}
    Complex::~Complex()
{
     cout<<"Distructor is called "<<u<<endl;
}
    void Complex::setReal(float r)
{
    real = r ;
}
    void Complex::setImag(float i)
{
    imag = i ;
}
    float Complex::getImage()
{
    return imag ; 
}
    float Complex::getReal()
{
    return real;
}
    Complex Complex::add(Complex c)
{
    Complex temp ; 
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
    Complex Complex::sub(Complex c)
{
    Complex temp ;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp ;
}
    void Complex::print()
{
    if(imag < 0)
    {
        cout<<real<<" - "<<imag * -1<<"i"<<endl;
    }
    else 
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
}	
    void Complex::setAll()
{
     real = 0 ; 
     imag = 0 ;
}	
    void Complex::setAll(float f)
{
      real = f; 
      imag = f;
}  
    void Complex::setAll(float r, float i)
{
      real = r; 
      imag = i;
}  
