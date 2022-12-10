#include<iostream>
using namespace std;
class GeoShape
{
    protected :
        double dim1 ;
        double dim2 ;   
    public :
        
        GeoShape(double dim1 ,double dim2)
        {
            this -> dim1 = dim1;
            this -> dim2 = dim2;
        }  
        GeoShape(double dim1)
        {
            this -> dim1 = dim1 ;
            dim2 = dim1;
        }  
        GeoShape()
        {
            dim1 = dim2 = 0;
        }
        void setDim1(double dim1)
        {
           this->dim1 = dim1 ;
        }
         void setDim2(double dim2)
        {
           this->dim2 = dim2 ;
        }
        float callArea(){return 0.0;};
};
class Rect:protected GeoShape
{
  public :
    Rect(float x , float y):GeoShape(x,y){}
    float calcArea()
    {
        return dim1*dim2;
    }
};
class Square:public Rect 
{
  public :
    Square(float r):Rect(r,r){}
    void setDim1(double dim)
    {
        dim1 = dim2 = dim ;
    }
     void setDim2(double dim)
    {
        dim1 = dim2 = dim ;
    }
};
class Triangle : public GeoShape
{
    public :
      Triangle(float b,float h):GeoShape(b,h){}
      float calcArea()
      {
        return 0.5 * dim1 * dim2;
      }
};
class Circle : public GeoShape
{
    public :
      Circle(float r) : GeoShape(r){}
      float calcArea()
      {
         return 22.0/7 * dim1 * dim2;
      }
      void setDim1(double dim1)
      {
        this->dim1 = this->dim2 = dim1; 
      }
      void setDim2(double dim1)
      {
        this->dim1 = this->dim2 = dim1; 
      }
};
int main()
{
Triangle myT(20, 10);
cout << myT.calcArea() << endl;
Circle myC(7);
cout << myC.calcArea() << endl;
Rect myR(2, 5);
cout << myR.calcArea() << endl;
Square myS(5);
cout << myS.calcArea() << endl;
 myS.setDim1(2);
 myR.setDim1(5);
//getch() ;
return 0;

}
