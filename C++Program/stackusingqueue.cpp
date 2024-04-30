#include<bits/stdc++.h>
using namespace std;
class stock{
	int N ;
   queue<int> q1;
   queue<int> q2;
      public:
    stock()
    {
    	N=0;
	}
   void push(int x)
   {
   	q2.push(x);
   	N++;
    while(!q1.empty())
    {
    	q2.push(q1.front());
    	q1.pop();
	}
	queue<int> temp;
	temp=q2;
	q2=q1;
	q1=temp;
   	}
   	int pop()
   	{
   		if(q1.empty())
   		{
   		 cout<<"queue is empty";	
   		 return 0;
		}
   	  int x=q1.front();
   	  q1.pop();
   	  N--;
   	  return x;
	}
	bool empty()
	{
		if(N==0)
		{
		 return true ;
		}
		return false;
	}
	void len()
	{
		cout<<"len="<<N<<endl;
	}
	int top()
	{
		if(!q1.empty())
     {
	 return q1.front(); 
	 }
	  return 0;
	}
};
int main()
{
	stock st;
	cout<<st.empty() ;
    st.	push(2);
    st.push(0);
    st.push(9);
    st.push(8);
    st.push(6);
    
    st.len();
    
	cout<<"top elementst ="<<st.top()<<endl; 
	
	cout<<"poped element = "<<st.pop()<<endl; 
	cout<<"poped element = "<<st.pop()<<endl;
	cout<<"poped element = "<<st.pop()<<endl;   
	cout<<"poped element = "<<st.pop()<<endl;   
    cout<<"poped element = "<<st.pop()<<endl; 
	cout<<"poped element = "<<st.pop()<<endl;  
	
	st.top();
}
