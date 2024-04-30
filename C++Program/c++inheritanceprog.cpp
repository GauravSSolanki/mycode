#include<iostream>
#include<conio.h>
using namespace std;
class base 
{ public: 
  int a,b;
  void enter()
  {
    
  cout<<"enter value of a and b :";
  cin>>a>>b;
  }
  void display()
  { 
  cout<<" add of a and b "<< a+b<<endl;
  }
};
class sclass :public base
{  public:
 void sdisplay()
 {
 cout<<" sub of a and b "<< a-b<<endl;
 }  
  void getdata();  
};
class sclass::void getdada()
  {
   cout<<" hii mr gaurav ";
  }
int main()
{ 
sclass s ;
 s.enter() ;
 s.display();
 s.sdisplay();
 s.getdata();
}
