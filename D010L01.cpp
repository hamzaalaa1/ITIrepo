#include<iostream>
//#include<conio>
 
using namespace std;
template <typename T>
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
       Stack(Stack<T> &);
       int isEmpty();
       int isFull();
       int push (T value);
       int pop  (T &pValue);
       static int getCount();

       template<typename S>
       friend void viewStack(Stack<S> s);

       Stack<T>& operator=(const Stack<T> &);
};
template<typename T>
int Stack<T>::objCount = 0; //initialize static variable 
void copyArray(int *ptr1,int *ptr2 , int size);

int main()
{
     //  clrscr();
       int value;
       Stack<int> s(4);
    
       s.push(1);
       s.push(2);
       s.push(3);
       s.push(4);
       s.push(6);
       viewStack(s);
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
       
       return 0 ;
 
}
template<typename T>
Stack<T>::Stack()
{
 	size = 10 ; 
 	top = -1 ; 
	ptr = new T[size];
	objCount ++;
}

template<typename T>
Stack<T>::Stack(int size)
{
	(*this).size = size ;
	top = -1 ; 
	ptr = new T[size];
	objCount ++ ; 
}
template<typename T>
Stack<T>::Stack(Stack<T> &s)
{
   top  = s.top ;
   size = s.size ;
   ptr = new T[size];
   for(int i = 0 ; i <= top ; i++)
     ptr[i] = s.ptr[i];
     
   objCount++;   
}
template<typename T>
int Stack<T>::isEmpty()
{
	return (top == -1);
}
template<typename T>
int Stack<T>::isFull()
{
	return (top == size);
}
template<typename T>
int Stack<T>::push(T value)
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
template<typename T>
int Stack<T>::pop(T &pValue)
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
template<typename T>
int Stack<T>::getCount()
{
 	return objCount ;
}
template<typename S>
void  viewStack(Stack<S> s)
{
        cout<<"in side view number of objects :"<<Stack<S>::getCount()<<'\n';
	for(int i = 0 ; i <=s.top ; i++)
	   cout<<"stack element number "<<i+1<<':'<<s.ptr[i]<<'\n';
}
template<typename T>
Stack<T>::~Stack()
{
	delete [] ptr;
	objCount -- ;
}
template<typename T>
Stack<T>& Stack<T>::operator=(const Stack &S)
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