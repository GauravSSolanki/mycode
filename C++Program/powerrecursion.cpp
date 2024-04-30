#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std ;
int power(int p ,int n  )
{
	if(p==1)
	{ 
	return n ;
	}
	int prepower = power( p-1 ,n ) ;
	return n*prepower ;
}
int factorial(int n )
{
	if(n==1)
	{ 
	return 1;
	}
	int fact = factorial(n-1) ;
	return n*fact ;
}
int fibo(int n)
{
	if(n==0 || n==1 )
	{
		return n ;
	}
	return fibo(n-1) + fibo(n-2) ;
}
int main()
{ 
  // cout<<power(3,3)<<endl;
  // cout<<factorial(4)<<endl ;
  cout<<fibo(6)<<endl;
}
