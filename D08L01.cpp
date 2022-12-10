#include<iostream>

using namespace std;
class Point
{
  int x ; 
  int y ;

  public :
  
  Point();
  Point(int p);
  Point(int x ,int y);
  Point(Point &);
  ~Point();

  void setX(int x);
  void setY(int y);
  
  int getX();
  int getY();

  void print();
};

class Line
{
    private :

       Point start ; 
       Point end;

    public  :
         
       Line ();
       Line (Point point1 ,Point point2);
       ~Line();

       void print();   
};
class Circle
{
    private :

       Point center ;
       int r ;

    public  :
       Circle();
       Circle(Point p, int r);
       ~Circle();
       void print(); 
};
class Rect
{
    private :
        Point UL ;
        Point LR ;
    public  :
        Rect();
        Rect(Point p1,Point p2);
       ~Rect();

       void print();
};
//-------------------------------------------------main------------------------------------------//
int main()
{
    Point p1(1,2);
    Point p2(3,4);
     
    Line line(p1,p2);
    line.print();

    Circle c(p1,10);
    c.print();

    Rect r(p1,p2);
    r.print();

}
Point::Point()
{
    x = y = 0;
}

Point::Point(int p)
{
    x = y = p ;
}

Point::Point(int x , int y)
{
    this ->x = x ;
    this ->y = y ;
}

Point::Point(Point &point)
{
    x = point.x ;
    y = point.y ;
}
void Point::setX(int x)
{
    this -> x = x ;
}
void Point::setY(int y)
{
     this -> y = y;
}
void Point::print()
{
    cout<<"x :"<<x<<"\n";
    cout<<"y :"<<y<<"\n";
}
Point::~Point()
{
 }
//----------------------------------------------------------------------------------------//
Line::Line()
{
   start.setX(0);
   start.setY(0);
}

Line::Line(Point s1 , Point s2):start(s1),end(s2)
{}
Line::~Line()
{
 }
void Line::print()
{
   cout <<"start :\n" ; start.print();
   cout <<"end   :\n" ; end.print();
}
//----------------------------------------------------------------------------------------//
Circle::Circle():center(),r(0)
{

}
Circle::Circle(Point  p, int r):center(p),r(r)
{

}
Circle::~Circle()
{
 }
void Circle::print()
{
    cout <<"center is :\n";center.print();
    cout << "red :"<<r<<endl;
}
//-----------------------------------------------------------------------------------------//
Rect::Rect():UL(),LR()
{
  
}
Rect::Rect(Point p1,Point p2):UL(p1) ,LR(p2)
{

}
Rect::~Rect()
{}
void Rect::print()
{
  cout << "Rectangle \n" ; 
  UL.print();
  LR.print();
} 
//----------------------------------------------------------------------------------------//
