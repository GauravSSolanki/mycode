#include<iostream>
#include<conio.h>
using namespace std;
class A 
{ public :
	void display()
	{
		cout<<" i am A"<<endl;
	}
};
class B : virtual public A
{ public:
	void display1()
	{ 
	cout<<" i am in second class B "<<endl;
	}
};
class C :virtual public A
{ public:
	void display2()
	{ cout<< "i am in third class  A and C"<< endl;
	}
};
class D : public B,public C
{ public:
	void display3()
	{cout<<" i am in class D and A"<<endl;
	}
};
int main()
{ 
   D d;
   B b ;
   b.display();
   d.display1();
   d.display2();
   d.display3();
}
