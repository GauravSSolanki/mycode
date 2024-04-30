#include <iostream>
#include<conio.h>
using namespace std;
class student
{ 
   char name[50] ;
   int n;
   int subject[n];
   int rollno ;
   public:
   
void getdata() 
	   {int i=0;
	    cout<<"enter Name =";
	    cin>>name;
	    cout<<"\n enter rollno = ";
	    cin>>rollno;
	    cout<<"Enter totalsubject =";
	    cin>>n;
	 for(i=0;i<n;i++)
	   {  cout<<"enter subject marks out of 100 = "; 
          cin>>subject[i];  } } 
void display()
     { int i;
	cout<<name << rollno;
           for(i=0;i<n;i++)
      {  cout<<"\n subject marks "<<subject[i];   
	   } } 
void calculate()
	    { int i=0, sum=0,total=0;
	   double percentage=0;
	          for(i=0;i<n;i++)
	           { sum=sum+subject[i];}
	      total=sum ;
	       cout<<" \n total marks of all subject"<<total ;
	      percentage=total/n;
	      cout<<"\n net percent = "<<percentage  ;
		} };

int main()
	   {  student s;
	    s.getdata();
	    s.display();
	    s.calculate();
	}
