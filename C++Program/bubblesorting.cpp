#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<conio.h>
using namespace std;

int bubblesorting(int arr[] ,int n )
 { 
   int temp=1 , j ;
   int  counter =1 ;
   while(counter<n)
   {
   
 	for(int i=0;i<n-counter ;i++) 	
 	  {  
	    if(arr[i] > arr[i+1])
 	        {
			 temp=arr[i] ;
 	         arr[i]=arr[i+1];
 	         arr[i+1]=temp;
			}
	   }
	   counter++;
   }
   for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<"\t" ;
	 }
 }
 int main()
 {
  int n ;
  cin>>n;
  int arr[n] ;
   for(int i=0;i<n;i++)
    {
    	cout<<"enter ["<<i+1<<"]\t" ;
   	  cin>>arr[i] ;
    }
   bubblesorting(arr ,n ) ;
}
