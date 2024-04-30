#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std ;
int main()
{   int raw =1 , i ,j; 
 cout<<"enter number pattern sequence ";
    cin>>raw;
    
	for(i=1;i<=2;i++)
   { 
      for(j=1;j<=i;j++)
      {  
	   cout<<"* "; 
      }cout<<endl;
   }
    for(i=3;i<raw;i++)
    {  for(j=1;j<=i;j++)
     
	   {  if(j==1 || j==i)
    	   {
		   cout<<"* " ;
           }
		   else
		   { cout<<"  ";
			   }
				
	   } cout<<endl;
	}
	if(i==raw)
	{ for(j=1;j<=raw;j++)
     	cout<<"* " ;
	}
}
   
