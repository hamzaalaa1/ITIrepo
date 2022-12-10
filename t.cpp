 #include<iostream>
using namespace std ;
class Base
{
  void print()
  {
    cout << "base version\n";
  }
};
class sub:public Base
{
    void print()
    {
        cout <<"sub version\n";
    }
};
 
int main()
{
   Base *ptr = new sub();

 }
 