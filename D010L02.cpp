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
       virtual float calcArea() = 0;
};
class Rect:public GeoShape
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
double sumeOfAreas(GeoShape *ptr1 , GeoShape *ptr2 , GeoShape *ptr3)
{
    return ptr1 ->calcArea()+ptr2 ->calcArea() + ptr3 ->calcArea();
}
int main()
{
 GeoShape *gPtr[3] = {new Circle(10),new Triangle(4,3),new Rect(2,4)};
 
  for(int i = 0 ; i < 3 ; i++)
 {
     cout << gPtr[i] ->calcArea()<<'\n';
 }

 for(int i = 0 ; i < 3;i++)
 {
     delete [] gPtr[i];
 }

}
