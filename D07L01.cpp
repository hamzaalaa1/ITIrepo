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
{
   //clrscr();
   Complex myComp1, myComp2(3, 4,'A'), resultComp(5,'B') ;
   myComp2.operator<<(cout);          //calling a overloading function by 1 set & get overhead 2 complex is copy 3 formate is hard;
   myComp2<<(resultComp<<cout);      //this is not familiar with programmers
   cout << myComp2;                   //the deas  desired format ;

//--------------------------------------------------------------------------------------//
   
   resultComp =  myComp1+myComp2;  
   cout << "sum is :"<< resultComp<<endl;

//--------------------------------------------------------------------------------------//

   operator++(resultComp,0);//compiler call ;
   cout << resultComp;
   resultComp++; //our call ;
   cout<<resultComp; //  why we can not type like that cout << result++ ; my Q1; q becuse we can not take the reference from returned function
   
//---------------------------------------------------------------------------------------//

   Complex c = myComp2;
   cout<<"c2 "<<c;

//---------------------------------------------------------------------------------------// 

  Complex x(1,1,'R');
  cout <<"x + mycomp2 :"<<(x += myComp2)<<endl;  
  cout <<(float) x<<'\n';
 // getch();
  return 0 ;
}

    Complex::Complex()
{
    real = imag = 0 ; 
  
}
    Complex::Complex(float r ,float i ,char uu)
{
     u = uu ;
     real = r; 
     imag = i ;    
     
}
    Complex::Complex(float r,char uu)
{
     u = uu ;
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