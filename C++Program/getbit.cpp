#include<iostream>

using namespace std ;

int getbit(int n ,int pos ) 
{
  return((n&(1<<pos))!=1) ;
} 

int setbit(int n ,int pos )  // 0101=0100 , or  0100
{
  return(n | (1<<pos) );
}
int clearbit(int n ,int pos ) //clear bit program 0101 ->  0100 (1011 & 0101) 0001
{
	int mask ;
	mask= ~(1<<pos) ;
	return (n & mask) ;
}
int updatebit(int n,int pos ,int value )
{
	 int mask ;
	mask = ~(1<<pos) ;
	n = n  & mask ;
	return (n| (value<<pos)) ;  
}

int main()
{
 //cout<<getbit(5,2 )<<endl;
 //cout<<setbit(5,1)<<endl;
 //cout<<clearbit(5,2)<<endl;
 cout<<updatebit(5,1,1) ;
 
}
