#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std ;
int main()
{ int n,j=1;

 
   cout<<"enter number for factorial ";
   cin>>n;
   {
	 for(int i=2;i<=n;i++)
     { 
        j= i* j;
	 }
	 cout<<j ;
  }
}
