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
//----------------------------------------------Picture------------------------------------------//
class Picture
{
    private :
      int cNum ;
      int rNum ; 
      int lNum ;

      Circle *pCricless ;
      Rect   *pRects;
      Line   *pLine;

    public :

      Picture();
      Picture(int cM,int rN,int lN,Circle *pc,Rect *pr,Line *pl);

      void setCircle(Circle *p,int cNum);
      void setRect(Rect *p , int   rNumb);
      void setLine(Line *p , int   lNum); 

      void print(); 
};
//-------------------------------------------------main------------------------------------------//
int main()
{
    Picture Pic ;
    Point p1(10,10);

    Circle cArr[3] = {Circle(p1,2),Circle(p1,2)};
    Rect   rArr[3] = {Rect(p1,p1),Rect(p1,p1),Rect(p1,p1)};
    Line   lArr[3] = {Line(p1,p1),Line(p1,p1),Line(p1,p1)};
    
    Pic.setCircle(cArr,3);
    Pic.setLine  (lArr,3);
    Pic.setRect  (rArr,3);

    Pic.print();

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

Picture::Picture():rNum(0),lNum(0),cNum(0){}

Picture::Picture(int cM ,int rN ,int lN ,Circle *pc,Rect *pr,Line *pl):cNum(cM),rNum(rN),lNum(lN){}

void Picture::setCircle(Circle *p,int cNum)
{
    this-> cNum = cNum;
    pCricless = p;
}
void Picture::setRect(Rect *p,int rNum)
{
    this->rNum = rNum;
    pRects = p;
}
void Picture::setLine(Line *p,int lNum)
{
    this->lNum = lNum;
    pLine = p;
} 
void Picture::print()
{
    int i;
 for(i=0; i<cNum ; i++)
{
    pCricless[i].print();
}
 for(i=0 ; i<rNum ; i++)
{
    pRects[i].print();
}
 for(i=0 ; i<lNum; i++)
{
    pLine[i].print();
}
}
//--------------------------------------------------------------------------------------------------//

