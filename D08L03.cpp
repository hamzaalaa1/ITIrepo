#include<iostream>
//#include<conio>

using namespace std;
class Complex 
{
    private :
        float real ; 
        float imag ;
        char u; 
    public  :
         Complex();
         Complex(float r);
         Complex(float r, float i);
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

         ostream & operator<<(ostream&); //as member function is not familiar
         friend  ostream &operator<<(ostream & out,Complex &c) ;
         Complex&  operator= (const Complex &c);
         Complex   operator+ (Complex &c); 
         Complex & operator+=(Complex &c);
         operator float();
         void print();
};

Complex operator++(Complex &c,int);

int main()
{   int size  = 3;
 

  // Complex *c[size] = {new Complex(1.2),new Complex(2.2),new Complex(1,3)};
    
  Complex *cPtr[size] = {new Complex(1),new Complex(2),new Complex(3)};
   for (int i = 0 ; i < size ; i++)
      cout << cPtr[i][0]; 
for(int i = 0 ; i < size ; i++);
    // delete [] cPtr;
}

    Complex::Complex()
{
    real = imag = 0 ; 
  
}
    Complex::Complex(float r ,float i)
{
  
     real = r; 
     imag = i ;    
     
}
    Complex::Complex(float r)
{
  
     real = imag = r ;
      
}
    Complex::~Complex()
{
      
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
ostream &Complex::operator<< (ostream &out)
{
     cout <<real<<" + "<< imag<<'i'<<'\n';     
     return out;
}
ostream &operator<<(ostream & out,Complex &c)//& to eliminate the object copy overhead 
{
      cout << c.real <<" + "<<c.imag<<"i"<<'\n';
      return out;
}
Complex Complex::operator+(Complex &c)
{
      return Complex(real+c.real , imag +c.imag);
}
Complex operator++(Complex &c,int)
{
    Complex temp = c;
    c.setAll(c.getReal()+1,c.getImage()+1);
    return temp ;
}
 Complex& Complex::operator= (const Complex &c)
{
    real = c.real;
    imag = c.imag;
    return *this;
} 
 
 Complex & Complex::operator+=(Complex &c)
 {
    real += c.real;
    imag += c.imag;
    return *this;
 }
Complex::operator float()
{
    return real;
}
