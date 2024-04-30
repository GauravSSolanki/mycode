#include<iostream>
#include<conio.h>
using namespace std ;
class base
 {  public:
 virtual void show()
   {
     cout<< "this is in base ";
   }
 };
class derived : public base 
{
     public:
	void show()
	{ 
	 cout<<" \n this is in derived ";
	}
};
int main()
{ base b , *p ; 
  derived d ;
  p=&b;
  p->show();
  p=&d;
  p->show();
}
