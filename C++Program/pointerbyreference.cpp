#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std ;
int increament(int ptr)
{
	++ptr;
	return ptr;
	
}
int main()
{
	int a =10 ;
	int *ptr=&a;
	a=increament(*ptr) ;
	cout<<a<<endl;
	return 0;
}
