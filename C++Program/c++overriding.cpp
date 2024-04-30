#include <iostream>
#include<conio.h>
using namespace std;
class Base 
{   public:
	void show()
	{ 
	cout<<"i am in base class "<<endl;
	}
};
class derived : virtual public Base
{ public:
	void show()
	{
	  cout<<" i am in derived class"<<endl;
	}
};
int main()
{ 
  derived d ;
  d.show();
  cout<<" show function done";
}
