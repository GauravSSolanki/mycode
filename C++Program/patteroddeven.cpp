#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std ;
int main()
{
 int raw =1 , i ,j; 
   cout<<"enter number pattern sequence ";
   cin>>raw;
   
    for(i=1;i<=raw;i++)
    { for(j=1;j<=i;j++)
      { 
        if( j%2==1  )
        { 
        cout<<"1 ";
		}
		else
		{
	    cout<<"0 ";
		}
	   }
	   cout<<endl;  
    }
}
