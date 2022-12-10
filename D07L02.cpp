#include<iostream>
//#include<conio>
 
using namespace std;
class Stack
{ 
      int size ; 
      int top ; 
      int *ptr ; 
      static int objCount ; 
  public :
     
       Stack();
       Stack(int size);
       ~Stack();
       Stack(Stack &);
       int isEmpty();
       int isFull();
       int push (int value);
       int pop  (int &pValue);
       static int getCount();
       friend void viewStack(Stack s);
       Stack& operator=(const Stack &);
};

int Stack::objCount = 0; //initialize static variable 
void copyArray(int *ptr1,int *ptr2 , int size);

int main()
{
     //  clrscr();
       int value;
       Stack s(4);
    
       s.push(1);
       s.push(2);
       s.push(3);
       s.push(4);
       s.push(6);

       /*cout<<"number of objects :"<<Stack::getCount()<<'\n';
       viewStack(s);
       cout<<"after return form view number of objects :"<<Stack::getCount()<<'\n';
       s.pop(value);
       cout<<"first   poped value "<<value<<'\n';
       s.pop(value);  
       cout<<"secound poped value "<<value<<'\n';
       s.pop(value);
       cout<<"third   poped value "<<value<<'\n';
       s.pop(value);   
       cout<<"4th poped value "<<value<<'\n';
       s.pop(value);   
       cout<<"5th poped value "<<value<<"\n\n";
       s.pop(value);   */
       
     //  cout<<"number of objects :"<<Stack::getCount();
     //  getch();
       Stack s2 = s;
       viewStack(s2);
       return 0 ;
 
}

Stack::Stack()
{
 	size = 10 ; 
 	top = -1 ; 
	ptr = new int[size];
	objCount ++;
}

Stack::Stack(int size)
{
	(*this).size = size ;
	top = -1 ; 
	ptr = new int[size];
	objCount ++ ; 
}

Stack::Stack(Stack &s)
{
   top  = s.top ;
   size = s.size ;
   ptr = new int[size];
   for(int i = 0 ; i <= top ; i++)
     ptr[i] = s.ptr[i];
     
   objCount++;   
}
int Stack::isEmpty()
{
	return (top == -1);
}
int Stack::isFull()
{
	return (top == size);
}

int Stack::push(int value)
{
        top ++ ; 
        if(isFull())
        {
           top -- ;
           return  0 ; 
        }
        ptr[top] = value ;
        return 1 ;
}

int Stack::pop(int &pValue)
{
	if(isEmpty())
	{
	   pValue = 0;
           return 0 ; 
	}
        pValue = ptr[top];
        top -- ;
        return  1;
}

int Stack::getCount()
{
 	return objCount ;
}

void  viewStack(Stack s)
{
        cout<<"in side view number of objects :"<<Stack::getCount()<<'\n';
	for(int i = 0 ; i <=s.top ; i++)
	   cout<<"stack element number "<<i+1<<':'<<s.ptr[i]<<'\n';
}

Stack::~Stack()
{
	delete [] ptr;
	objCount -- ;
}

Stack& Stack::operator=(const Stack &S)
{
        size =  S.size;
        top  =  S.top;
        ptr  = new int[size];
       copyArray(ptr,S.ptr,size); 
       return *this;
}
void copyArray(int *ptr1,int *ptr2,int size)
{
        for(int i = 0 ; i <= size ; i++)
        {
           ptr1[i] = ptr2[i];
        }
}