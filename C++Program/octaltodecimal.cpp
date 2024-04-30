#include<bits/stdc++.h>
using namespace std ;
  
 void octaltodecimal(int n)
 {   
  int  ans=0 ,x =1 , y=0 ; 
   while(n>0)
   {
   	  y = n%10 ;
   	  ans = ans+ x*y ;
   	  x*=8;
   	  n/=10;
   }
   cout<<ans<<endl;
 }
 
  void binarytodecimal(int m)
 {   
  int  ans=0 ,x =1 , y=0 ; 
   while(m>0)
   {
   	  y = m%10 ;
   	  ans = ans+ x*y ;
   	  x*=2;
   	  m/=10;
   }
   cout<<ans<<endl;
 }
 
 void hexadecimaltodecimal(string k)
 {
 	 int ans= 0,x=1 ,i ,j ;
 	 int s = k.size() ;
 	 for(i=s-1;i>=0;i--)
 	{
	   if(k[i]>='0' && k[i]<='9')
	   {
	    ans=ans+ x*(k[i]-'0');
	  }
	  else if(k[i]<='F' && k[i]>='A')
	  { 
	    ans += x *( k[i]-'A'+10 ) ;
	  }
	  x*=16;
    }
    cout<<ans<<endl;
 }
 
 int main()
{ int n ,m ;
char  k[10] ;

   cout<<" number octal to decimal "<<endl;
    cin>>n;
   cout<<" number binary to decimal "<<endl;
    cin>>m ;
    cout<<"input hexa "<<endl;
    cin>>k;
   octaltodecimal(n);
   binarytodecimal(m);
   hexadecimaltodecimal(k) ;
   
   
}
