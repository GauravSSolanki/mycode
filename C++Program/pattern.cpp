#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std ;
int main()
{ int raw =1 , i ,j;

{ 
   cout<<"enter number pattern sequence ";
   cin>>raw;
   for(i=raw;i>=1;i--)
   {
     for(j=1;j<=i;j++)
     {
	  cout<<"*";
	 }
     
   cout<<endl;
    }
}
{
  int n=1 ,k,l=1 ;
   for(k=1;k<=raw;k++)
   { int  n=1;
   	for(l=raw;l>=k;l--)
   	{ 
	   cout<<n<<" ";
   	      n++;
	   }cout<<endl;
   } 
}
}
