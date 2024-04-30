#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std ;
int main()
{ 
  int a ,b ,num,i ;
  cout<<"input a  ";
  cin>>a;
  cout<<"input b ";
  cin>>b;
   
    for(num=a;num<=b;num++)
    {
	  { 
	  for(i=2;i<num;i++)
          {
         	if(num%i==0)
         	break;
          }  
	  } 
	if(i==num)
	 {
		cout<< "prime numbers are : \n"<<num<<endl ;
		
	 }
   } 
 return 0;

}

