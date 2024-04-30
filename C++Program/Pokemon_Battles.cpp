#include <iostream>
using namespace std;

int main() 
{
		int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
      int n;
	  cin>>n;
	 
	  int a[n];
	  int b[n];
	  int c[n];
	  for(int i=0;i<n;i++)
	  { 
	    cin>>a[i];	
      }
      for(int i=0;i<n;i++)
	  { 
	    cin>>b[i];	
      }
      for(int i=0;i<n;i++)
      {   int k=n-1;
	      for(int j=0;j<n;j++)
          { 
         	if(a[i] < a[j])
         	 {  
            	k--;
         	 }  
          }
          c[i]=k;	
      }
      //enter b array 
      for(int i=0;i<n;i++)
      {   int k=n-1;
	      for(int j=0;j<n;j++)
          { 
         	if(b[i] < b[j])
         	 {  
            	k--;
         	 }  
          }
          a[i]=k;	
      }
      for(int i=0;i<n;i++)
      {
      	b[i]=a[i]+c[i];
		
	  }
	   int k=0;
	  for(int i=0;i<n;i++)
	  {
	  	if(b[i]>=(n-1)  )
	  	 { 
		   k++;
		 }
	  }
	  cout<<k<<endl;
	  
   }
	return 0;
}