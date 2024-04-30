#include<bits/stdc++.h>
using namespace std ;
class que 
{
	stack<int> s1;
	stack<int> s2;
	public :
	 void push(int x)
		{
		  s1.push(x);
		}
	int pop()
	{
		if(s1.empty() && s2.empty())
		  {
		  	cout<<"stack is empty"<<endl<<"THANKYOU"<<endl;
		  	return -1 ;
		  } 
		while(!s1.empty())
	    	{
		    s2.push(s1.top()) ;
		    s1.pop();	
		    }
		    int topval = s2.top();
		    s2.pop();
		    return topval;
 	}
 	bool empty()
	{
		if( s1.empty() && s2.empty())
		 { return true;
		  }
		return false;
	} 
};
int main()
{
	que q ;
	q.push(2);
	q.push(3);
	q.push(5);
	q.push(8);
	q.push(9);
	cout<<q.pop()<<endl;
	q.push(10);
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	
}
